class Solution {
public:
    int MAX_CHAR = 26;
    string getHash(string s){
        string freq_hash;
        vector<int> freq(MAX_CHAR, 0);
        for(char ch:s) freq[ch-'a'] += 1;
        for(int i=0; i<MAX_CHAR; i++){
            freq_hash.append(to_string(freq[i]));
            freq_hash.append("$");
        }
        return freq_hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> mp;
        for(string s:strs){
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
