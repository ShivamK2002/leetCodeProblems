class Solution {
public:
    void solve(vector<int>&nums,int n,vector<vector<int>>&ans,int index){
        if(index>=n){
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<n; i++){
            swap(nums[i],nums[index]);
            solve(nums,n,ans,index+1);
            swap(nums[i],nums[index]);
        }
           
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        solve(nums,n,ans,0);
        return ans;
    }
};