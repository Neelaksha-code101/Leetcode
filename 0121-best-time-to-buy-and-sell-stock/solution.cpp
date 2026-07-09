class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int min_day=0;
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
                min_day=i;
            }
            else{
                profit=max(profit, prices[i]-min);
            }
        }
        return profit;    
    }
};
