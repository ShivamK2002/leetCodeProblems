class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n = nums.size();
        vector<int>rightSum(n);
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            sum+=nums[i];
            rightSum[i] = sum;
          
        }
        cout<<endl;
       
        sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum == rightSum[i]) return i;
        }

        return -1;
        
    }
};