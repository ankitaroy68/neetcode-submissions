class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int hasZero = 0;
        int prod = 1;
        for(int num:nums){
            if(num) prod *= num;
            else hasZero += 1;
        }
        vector<int> res;
        if(hasZero){
            for(int num:nums){
                if(num) res.push_back(0);
                else{
                    if(hasZero>1) res.push_back(0);
                    else res.push_back(prod);
                }
            }
        }
        else{
            for(int num:nums){
                res.push_back(prod/num);
            }
        }
        return res;
    }
};
