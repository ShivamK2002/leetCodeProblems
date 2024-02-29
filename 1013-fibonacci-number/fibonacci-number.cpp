class Solution {
public:
    int memo(int n,vector<int>&dp){
        if(n<2) return n;
        if(dp[n]!=-1) return dp[n];

       dp[n-1] = memo(n-1,dp); 
       dp[n-2] = memo(n-2,dp);
       dp[n] = dp[n-1] + dp[n-2];
       return dp[n];
    }


    int fib(int n) {
        vector<int>dp(n+1,-1);
        return memo(n,dp);
        
    }
};