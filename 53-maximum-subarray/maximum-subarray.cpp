class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        
        int sum = nums[0];
        maxi = sum;

        for(int i=1; i<n; i++){
            if(sum<=0){

                sum = 0;
            }
            sum+=nums[i];
            maxi = max(sum,maxi);


        }
        




        return maxi;
    }
};