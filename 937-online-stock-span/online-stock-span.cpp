class StockSpanner {
public:
    stack<pair<int,int>>st;
    int counter;
    StockSpanner() {
        counter = -1;
    }
    
    int next(int price) {
        counter++;

        while(!st.empty() && st.top().first<=price) st.pop();

        int res;
        if(!st.empty()) {
            res =  counter - st.top().second;
            
        }
        else res= 1+counter; 
        st.push({price,counter});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */