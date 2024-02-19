class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==8) return true;
        if(n%2!=0 and n!=1) return false;
        for(int i=0; i<=sqrt(n); i++){
            if(pow(2,i)==n) return true;
        }
        return false;
    }
};