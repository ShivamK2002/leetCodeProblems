class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start>0 and goal>0){
            if ((start & 1) != (goal & 1)) {
                count++;
            }
            start = start>>1;
            goal = goal>>1;
        }
        while(start){
              count+=(start&1);
            start = start>>1;
        }
        while(goal){
              
              count+=(goal&1);
            goal = goal>>1;
        }

        return count;
    }
};