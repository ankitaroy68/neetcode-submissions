class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string s:tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                int res;
                if(s=="+") res = op1+op2;
                else if(s=="-") res = op2-op1;
                else if (s=="*") res = op1*op2;
                else if(s=="/") res = op2/op1;
                st.push(res);
             }
             else{
                st.push(stoi(s));
             }
        }
        return st.top();
    }
};
