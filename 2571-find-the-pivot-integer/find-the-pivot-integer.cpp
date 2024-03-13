class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        
        for(int i=1; i<=n; i++){
            int ele = i;

            if(ele*(ele-1)/2 == n*(n+1)/2 - i*(i+1)/2 ) return i;

        }
        return -1;
    }
};