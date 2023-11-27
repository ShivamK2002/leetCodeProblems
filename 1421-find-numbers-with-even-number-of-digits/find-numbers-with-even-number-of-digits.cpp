class Solution {
public:
    int countDigits(int num){
       int count = 0;
        while(num){
            num/=10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto i:nums){
            if(countDigits(i)%2==0)  ans++;
        }
        return ans;
    }
};