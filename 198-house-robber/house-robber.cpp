class Solution {
public:

    // int tab(vector<int>nums,int index,int n,vector<int>&dp){

    //     dp[n] = 0;
    //     // if(dp[index]!=-1) return dp[index];
    //     // return dp[index] = max(nums[index]+solve(nums,index+2,n,dp), solve(nums,index+1,n,dp));


    // }

    int solve(vector<int>nums,int n,vector<int>&dp){
        if(n<0)  return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = max(nums[n]+solve(nums,n-2,dp), solve(nums,n-1,dp));
    }


    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return solve(nums,nums.size()-1,dp);
    }
};