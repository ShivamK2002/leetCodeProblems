class Solution {
public:
    int climbStairs(int n) {
        int prev2 = 0;
        int prev1 = 1;

        for(int i = 0; i<n; i++){
            int ele = prev1 + prev2;
            prev2 = prev1;
            prev1 = ele;
        }

        return prev1;
    }
};