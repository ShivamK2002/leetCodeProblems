class Solution {
public:

   
    // int tabulation(int n,vector<int>&dp){
    //     dp[0] = 0;
    //     if(n==0) return dp[n];
    //     dp[1] = 1;

    //     for(int i=2; i<=n; i++){
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];
    // }
    // int memo(int n,vector<int>&dp){
    //     if(n<2) return n;
    //     if(dp[n]!=-1) return dp[n];

    //    dp[n-1] = memo(n-1,dp); 
    //    dp[n-2] = memo(n-2,dp);
    //    dp[n] = dp[n-1] + dp[n-2];
    //    return dp[n];
    // }


    int fib(int n) {
        // vector<int>dp(n+1,-1);
        // return tabulation(n,dp);

        if(n<2) return n;
        int a = 0;
        int b = 1;
        for(int i=2; i<=n; i++){
            int temp = a;
            a = b;
            b = temp+b;
        }
        return b;
        
    }
};