class Solution {
public:
    int countSetBits(int num){
        int count = 0;
        // long long nums = num;
        while(num){
            if(num&1) count++;
            cout<<"num is: "<<num<<endl;
            cout<<count<<endl;
            num = num>>1;

        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(countSetBits(i)==k) sum+=nums[i];
        }
        return sum;
    }
};