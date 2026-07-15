class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        stack<double> st;
        for(int i = 0; i<position.size(); i++) v.push_back({position[i], speed[i]});
        sort(v.rbegin(), v.rend());
        for(auto& p:v){
            double time = (double)(target-p.first)/p.second;
            if(st.empty() || time>st.top()) st.push(time);
        }
        return st.size();
    }
};
