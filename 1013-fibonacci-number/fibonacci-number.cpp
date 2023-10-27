class Solution {
public:
 int bottomUp(int n)
    {
        // 1. Create dp array
        vector<int> dp(n+1,-1);

        // 2. Base Case
        dp[0] = 0;
        if(n == 0) return dp[0];
        dp[1] = 1;
        if(n == 1) return dp[1];

        // 3.
        for(int i = 2; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
    int tab(int n,vector<int>&dp){
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];

    }
    // int mem(int n,vector<int>&dp){
    //  if(n==0 || n==1){
    //      dp[n] = n;
    //      return n;
    //  }
    //  else if(dp[n]!=-1 ) return dp[n];
    //  dp[n] = mem(n-1,dp) + mem(n-2,dp);
    //  return dp[n];

    // }
    int fib(int n) {
        // int ans = 0;

        // vector<int>dp(n+1,-1);
        // dp[0] = 0;
        // dp[1] = 1;
    
        //  for(int i=2; i<=n; i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        // return dp[n];
        return bottomUp(n);
    }
};