class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int n : nums)
            freq[n]++;

        // bucket[i] = all numbers that appear exactly i times
        // max possible frequency is nums.size()
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto& [val, cnt] : freq)
            bucket[cnt].push_back(val);

        // sweep from highest frequency downward
        vector<int> res;
        for (int i = bucket.size() - 1; i >= 0 && res.size() < k; i--)
            for (int val : bucket[i])
                res.push_back(val);

        return res;
    }
};
