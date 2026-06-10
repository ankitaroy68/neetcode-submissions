class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string st:strs){
            res+=to_string(st.size())+"#"+st;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i<s.length()){
            string len="";
            while(s[i]!='#'){
                len+=s[i];
                i++;
            }
            string cur(stoi(len),' ');
            i++;
            int j = 0;
            while(j<cur.size()) cur[j++] = s[i++];
            res.push_back(cur);
        }
        return res;
    }
};
