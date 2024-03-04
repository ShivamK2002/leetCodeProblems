class Solution {
public:

    int solve(vector<int>nums,int index,int n,vector<int>&dp){
        if(index>=n)  return 0;
        if(dp[index]!=-1) return dp[index];
        return dp[index] = max(nums[index]+solve(nums,index+2,n,dp), solve(nums,index+1,n,dp));
    }


    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,0,nums.size(),dp);
    }
};