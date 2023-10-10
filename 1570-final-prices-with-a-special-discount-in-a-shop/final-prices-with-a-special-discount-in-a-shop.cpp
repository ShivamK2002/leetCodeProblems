class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int>discount(n);
        stack<int>st;
        st.push(0);
        for(int i=n-1; i>=0; i--){
            while(st.top()!=0 && st.top()>prices[i]) st.pop();
            discount[i] = (st.top());
            st.push(prices[i]);
        }
        for(auto i:discount){
            cout<<i<<endl;
        }
        for(int i=0; i<n; i++){
            prices[i] -=discount[i];
        }

        return prices;
    }
};