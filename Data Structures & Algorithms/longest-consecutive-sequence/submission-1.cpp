class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set numSet(nums.begin(), nums.end());
        int longest = 0;
        for(int num:nums){
            if(numSet.count(num-1)) continue;
            int length = 1;
            while(numSet.count(num+length)) length++;
            longest = max(longest, length);
        }
        return longest;
    }
};
