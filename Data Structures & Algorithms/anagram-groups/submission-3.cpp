class Solution {
public:
    int MAX_CHAR=26;
    string getHash(string s){
        vector<int> freq(MAX_CHAR,0);
        for(char ch:s) freq[ch-'a']++;
        string freq_hash="";
        for(int i:freq) freq_hash += to_string(i)+"$";
        return freq_hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        vector<vector<string>> res;
        unordered_map<string,int> mp;
        for(string str:strs){
            string key = getHash(str);
            if(mp.find(key)==mp.end()){
                mp[key] = res.size();
                res.push_back({});
            }
            res[mp[key]].push_back(str);
        }
        return res;
    }
};
