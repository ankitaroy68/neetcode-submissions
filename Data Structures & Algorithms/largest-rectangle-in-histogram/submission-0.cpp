class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<pair<int, int>> st;
        int maxArea = 0;
        for(int i = 0; i<n; i++){
            int start = i;
            while(!st.empty() && st.top().second > heights[i]){
                pair<int, int> top = st.top();
                int idx = top.first;
                int height = top.second;
                maxArea = max(maxArea, height*(i-idx));
                start = idx;
                st.pop();
            }
            st.push({start, heights[i]});
        }
        while(!st.empty()){
            int idx = st.top().first;
            int height = st.top().second;
            maxArea = max(maxArea, height*(n-idx));
            st.pop();
        }
        return maxArea;
    }
};
