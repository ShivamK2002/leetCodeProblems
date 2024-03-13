class Solution {
public:
    int pivotInteger(int n) {
        int tot=n*(n+1)/2;
        int sum=0;
        for(int i=1; i<=n; i++){
           
            if(sum==tot-sum-i)return i;
            sum+=i;    
        }
        return -1;
    }
};