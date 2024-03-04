#include <vector>
#include <algorithm>

class Solution {
public:
    int solve(vector<int>& nums, int index, int n, vector<int>& dp) {
        if (index >= n) return 0;

        // Check if the result for the current state is already memoized
        if (dp[index] != -1) {
            return dp[index];
        }

        int ans1 = solve(nums, index + 1, n, dp);
        int ans2 = nums[index] + solve(nums, index + 2, n, dp);

        // Memoize the result for the current state
        dp[index] = max(ans1, ans2);

        return dp[index];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1); // Initialize the dp vector with -1 for memoization
        return solve(nums, 0, n, dp);
    }
};
