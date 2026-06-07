class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(target==sum){
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
            else if(target<sum) right--;
            else left++;
        }
        return res;
    }
};
