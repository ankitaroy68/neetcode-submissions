class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> smp, tmp;
        for(char c:s) smp[c]++;
        for(char c:t) tmp[c]++;
        return smp==tmp;
    }
};
