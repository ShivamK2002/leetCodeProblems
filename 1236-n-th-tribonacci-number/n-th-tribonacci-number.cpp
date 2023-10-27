class Solution {
public:
    int tribonacci(int n) {
        int num1 = 0;

        int num2 = 1;
        int num3 = 1;
        if(n==2) return 1;
        if(n==num1 || n==num2) return n;

        for(int i=3; i<n; i++){
            int ele = num1+num2+num3;
            num1 = num2;
            num2 = num3;
            num3 = ele;
        }

        return num1+num2+num3;
    }
};