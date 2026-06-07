class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs){
            res += to_string(s.size())+"#"+s; 
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            string len = "";
            while(s[i]!='#'){
                len += s[i];
                i++;
            }
            string cur(stoi(len),' ');
            i += 1;
            int j = 0;
            while(j<cur.size()){
                cur[j++] = s[i++];
            }
            res.push_back(cur);
        }
        return res;
    }
};
