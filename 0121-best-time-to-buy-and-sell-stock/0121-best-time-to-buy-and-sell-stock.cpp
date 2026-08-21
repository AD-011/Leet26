class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy_value = prices[0];
       int profit = 0;
       int current_profit = 0;
       for(int i=1; i<prices.size(); i++){
         if(prices[i]<buy_value){
            buy_value = prices[i];
        }else{
            current_profit = prices[i]-buy_value;
            profit = max(current_profit,profit);
        }
    }
    return profit;

    }
};

 