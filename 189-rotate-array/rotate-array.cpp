class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        queue<int>q;
        if(n==1) return;
        if(k>n)k = k%n;
        for(auto i:nums) q.push(i);
        int it = n-k;
        while(it--){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }

        it=0;
        while(!q.empty()) {
            nums[it++] = q.front();
            q.pop();
        }
        
        


    }
};