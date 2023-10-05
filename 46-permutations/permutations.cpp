class Solution {
public:

    void solve(vector<int>&temp, vector<int>nums,vector<vector<int>>&ans,unordered_map<int,bool>&mpp,int n ,int index){
            if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){

       if(mpp[nums[i]]==false)
       {
           temp.push_back(nums[i]);
        mpp[nums[i]] = true;
        solve(temp,nums,ans,mpp,n,i+1);
        temp.pop_back();
        mpp[nums[i]] = false;
        }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,bool>mpp;
        vector<int>temp;
        for(auto i:nums){
            mpp[i]  = false;
        }
        int n = nums.size();
        vector<vector<int>>ans;
        solve(temp,nums,ans,mpp,n,0);
        return ans;
    }
};