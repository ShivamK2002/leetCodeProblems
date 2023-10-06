class Solution {
public:
    int integerBreak(int n) {
    int ans = 1;
    if(n==1 || n==2 || n==3) return n-1; 
     while((n-3)>=2){
        n-=3;
        ans*=3;
     }
        return ans*n;
    }
};