class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        queue<pair<int,int>>q;
        int n = tickets.size();
        for(int i =0; i<n; i++) q.push({tickets[i],i});
        while(!q.empty()){
            int ele = q.front().first;
            int index = q.front().second;
            q.pop();
             if(ele!=0) {
                ele--;
            q.push({ele,index});
            count++;
            }
            if(index==k and ele==0) break;

        }

        return count;
    }
};