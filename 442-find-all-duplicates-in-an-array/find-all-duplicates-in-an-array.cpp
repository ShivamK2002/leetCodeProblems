class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;

        int n = nums.size();
       sort(nums.begin(),nums.end());
       int prev;
           prev = nums[0];
       for(int i=1; i<n; i++){
           if(ans.empty()&& nums[i] == nums[i-1]) {
               ans.push_back(nums[i]);
                prev = nums[i];
           }
           if(nums[i] == nums[i-1] && nums[i]!=prev) {
               ans.push_back(nums[i]);
               prev = nums[i];
           }

       }

        return ans;
    }
};