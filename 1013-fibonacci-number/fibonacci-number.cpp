class Solution {
public:
    int memo(int n,vector<int>&dp){
        if(n<2) return n;
        if(dp[n]!=-1) return dp[n];

        return memo(n-1,dp)+memo(n-2,dp);
    }


    int fib(int n) {
        vector<int>dp(n+1,-1);
        // fib(n-1)+fib(n-2);
        return memo(n,dp);
        
    }
};