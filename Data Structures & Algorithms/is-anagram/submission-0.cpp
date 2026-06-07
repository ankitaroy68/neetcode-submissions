class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> smp, tmp;

        for (char ch : s)
            smp[ch]++;

        for (char ch : t)
            tmp[ch]++;

        return smp == tmp;
    }
};
