class Solution {
public:

    void powerSet(vector<int>nums,vector<vector<int>>&ans,vector<int>temp,int i, int n){
        if(i>=n){
            ans.push_back(temp);
            return;
        }
        powerSet(nums,ans,temp,i+1,n);
        temp.push_back(nums[i]);
        powerSet(nums,ans,temp,i+1,n);
        temp.pop_back();

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;

        int n = nums.size();
        powerSet(nums,ans,temp,0,n);
        













        return ans;
    }
};