class Solution {
public:
    int hammingDistance(int x, int y) {
        // int count = 0;

        // while(x and y){
        //     if(!(x&1 and y&1))count++;
        //     x = x>1;
        //     y = y>1;
        // }
        // while(x){
        //     x = x>1;
        //     count++;
        // }
        // while(y){
        //     y = y>1;
        //     count++;
        // }


        // return count;
        	return __builtin_popcount(x ^ y);

    }
};