class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n%4!=0 and n!=1) return false;
        if(n<1) return false;
        if(n==1) return true;
        return isPowerOfFour(n/4);
    }
};