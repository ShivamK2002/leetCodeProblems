class Solution {
public:
    void solve(vector<int>&nums,int n,vector<vector<int>>&ans,unordered_map<int,bool>&mpp,vector<int>temp){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(!mpp[i]){
                mpp[i] = true;
                temp.push_back(nums[i]);
                solve(nums,n,ans,mpp,temp);
                temp.pop_back();
                mpp[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int>temp;
        unordered_map<int,bool>mpp;
        solve(nums,n,ans,mpp,temp);
        return ans;
    }
};