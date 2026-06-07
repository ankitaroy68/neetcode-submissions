class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int max_profit = 0;
        int cur_profit;
        for(int i=1; i<prices.size(); i++){
            cur_profit = prices[i]-min_price;
            max_profit = max(max_profit, cur_profit);
            min_price = min(min_price, prices[i]);
        }
        return max_profit;
    }
};
