class Solution {
public:
    int rec(int n,vector<int>&fib){
     if(n==0 || n==1){
         fib[n] = n;
         return n;
     }
     else if(fib[n]!=-1 ) return fib[n];
     fib[n] = rec(n-1,fib) + rec(n-2,fib);
     return fib[n];

    }
    int fib(int n) {
        int ans = 0;

        vector<int>fib(n+1,-1);
        return rec(n,fib);
    }
};