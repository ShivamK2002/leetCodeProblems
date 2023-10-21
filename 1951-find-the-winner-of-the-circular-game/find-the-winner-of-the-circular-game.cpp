class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1; i<=n; i++) q.push(i);
        while(q.size()!=1){
            int it = k;
            while(it>1) {
                int ele = q.front();
                q.pop();
                q.push(ele);
                it--;
            }
            if(it==1) q.pop();
        }
        return q.front();
    }
};