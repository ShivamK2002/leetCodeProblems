class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0;
        int currentGas = 0;
        int currentCost = 0;
        int n = gas.size();
        int index = 0;

        for(int i=0; i<n; i++){
            currentGas+=gas[i];
            currentCost+=cost[i];
            tank +=gas[i]-cost[i];
            if(tank<0) {
                tank = 0;
                index = i+1;
            }


        }
        if(currentGas>=currentCost) return index;
        return -1;
        
    }
};