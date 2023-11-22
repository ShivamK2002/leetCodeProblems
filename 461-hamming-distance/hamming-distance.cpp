class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int digit = x^y;

        while(digit){
            if(digit&1==1) count++;
            digit = digit>>1;
        }
        return count;
    }
};