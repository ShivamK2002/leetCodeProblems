class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int n = nums.size();
        vector<long long>prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i=1; i<n; i++) prefixSum[i] = prefixSum[i-1]+nums[i];
        for(auto i:prefixSum) cout<<i<<" ";
        for(int i=n-1; i>=2; i--){
            long long largest = nums[i];
            long long res = prefixSum[i-1];
            if(largest<res) {ans = prefixSum[i]; return ans;}
            
        }   

        if(ans!=0) return ans;
        return -1;
    }
};