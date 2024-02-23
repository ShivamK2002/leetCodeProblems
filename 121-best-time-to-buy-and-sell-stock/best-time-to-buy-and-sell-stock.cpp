class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        vector<int>rightMax(n,0);
        rightMax[n-1] = prices[n-1];

        for(int i=n-2; i>=0; i--){
            rightMax[i] = max(prices[i],rightMax[i+1]);
        }

        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            int buy = prices[i];
            int sell = rightMax[i];
            int profit = sell-buy;
            maxi = max(profit,maxi);

        }

        return maxi;
       
    }
};