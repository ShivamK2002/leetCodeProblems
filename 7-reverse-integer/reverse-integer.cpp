class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
        while(x){
            ans = 10*ans +x%10;
            x/=10;
        }
        if(ans>INT_MAX or ans<INT_MIN) return 0;
        return ans;
    }
};