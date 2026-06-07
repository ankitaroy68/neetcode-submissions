class Solution {
public:
    int MAX_CHAR = 26;
    string getHash(string s){
        vector<int> freq (MAX_CHAR, 0);
        string hashKey;
        for (char ch:s)
            freq[ch-'a'] += 1;
        for(int fq:freq){
            hashKey.append(to_string(fq));
            hashKey.append("$");
        }
        return hashKey; 
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> mp;
        for (string s:strs){
            string key = getHash(s);
            if(mp.find(key) == mp.end()){
                mp[key] = res.size();
                res.push_back({});
            }
            res[mp[key]].push_back(s);
        }
        return res;
    }
};
