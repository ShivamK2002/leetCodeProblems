class Solution {
public:
    bool isPowerOfFour(int n) {
      
        while(n>1) {
              if(n%4!=0 and n!=1) return false;
            n/=4;
        }
        if(n==1) return true;
        return false;
    }
};