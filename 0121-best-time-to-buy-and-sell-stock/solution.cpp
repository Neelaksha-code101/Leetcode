class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int small=prices[0],profit=0;
        int s_day=0,l_day=0;
        
        for(int i=1;i<n;i++){
            if(prices[i]<small){
                small=prices[i];
            }
            profit=max(profit,prices[i]-small);
        }
        return profit;
    }
};
