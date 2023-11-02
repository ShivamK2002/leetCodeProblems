class Solution {
public:

    double solve(long n ,double x){
        if(n==0) return 1;
        if(n&1) return x*solve(n-1,x);
        else return solve(n/2,x*x);
    }
    double myPow(double x, int num) {

        double ans = 1;
        long  n = num;
        if(num<0) n = abs(num);
        ans = solve(n,x);
        if(num<0) return 1/ans;
        return ans;
    }
};