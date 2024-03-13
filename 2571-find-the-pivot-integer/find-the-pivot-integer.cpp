class Solution {
public:
    int pivotInteger(int n) {
        
        int sum = 0;
        int totalSum = n*(n+1)/2;
        for(int i=1; i<=n; i++){
           if(sum==totalSum-sum-i) return i;
            sum+=i;
        }
        return -1;
    }
};