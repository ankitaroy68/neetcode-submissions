class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> smp, tmp;
        for(char i:s) smp[i]++;
        for(char i:t) tmp[i]++;
        return smp==tmp;
    }
};
