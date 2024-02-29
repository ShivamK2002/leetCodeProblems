class Solution {
public:
    // int tabulation(int n, vector<int>&dp){
    //     dp [1] = 1;
    //     dp [0] = 1;
    //     if(n<2) return dp[n] = 1;

    //     for(int i=2; i<=n; i++){
    //         dp[i] = dp[i-1] + dp[i-2];
    //     }
    //     return dp[n];

    // }
    // int memo(int n, vector<int>&dp){
    //     if(n<2) return dp[n] = 1;
    //     return dp[n] = memo(n-1,dp) + memo(n-2,dp);

    // }
    int climbStairs(int n) {
        // vector<int>dp(n+1,-1);

        if(n<2) return 1;
        int a = 1;
        int b = 1;

        for(int i=2; i<=n; i++){
            int temp = a;
            a = b;
            b = temp+b;
        }
        return b;

        // return tabulation(n,dp);
        // return climbStairs(n-1) + climbStairs(n-2);
    }
};