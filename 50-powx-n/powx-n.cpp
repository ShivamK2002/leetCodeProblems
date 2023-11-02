class Solution {
public:
    double myPow(double x, int num) {

        double ans = 1;
        long  n = num;
        if(num<0)
        {
              n = abs(num);
        }
        while(n>0){
            if(n&1) {
                ans*=x;
                n-=1;
            }
            else{
                x*=x;
                n/=2;
            }
        }
        if(num<0) return 1/ans;
        return ans;
    }
};