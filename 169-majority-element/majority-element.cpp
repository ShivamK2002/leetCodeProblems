class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int ele = nums[0];  
        int n = nums.size();

        for(int i=1; i<n; i++){
            if(nums[i]==ele) count++;
            else if(count==0){
                ele = nums[i];
                count=1;
            }
            else if(ele!=nums[i]) count--;
        }
    
        count = 0 ;
         for(auto i:nums){
             if(i==ele) count++;
         }        
        if(count>n/2) return ele;

        return -1;


    }
};