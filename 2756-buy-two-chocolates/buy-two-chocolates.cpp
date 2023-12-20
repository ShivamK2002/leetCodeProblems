class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
    int val = money;
    priority_queue <int, vector<int>, greater<int> > pq; 
    for(auto i:prices) pq.push(i);

    money-=pq.top();
    pq.pop();
    money-=pq.top();

    
    if(money<0) return val;

        
        
        return money;
    }
};