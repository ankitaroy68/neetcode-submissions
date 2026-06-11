class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num:nums) freq[num]+=1;
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &[val,cnt]:freq) bucket[cnt].push_back(val);
        vector<int> res;
        for(int i=bucket.size()-1; i>0 && res.size()<k; i--){
            for(int num:bucket[i]){
                res.push_back(num);
                if(res.size()==k) return res;
            }
        }
        return res;
    }
};
