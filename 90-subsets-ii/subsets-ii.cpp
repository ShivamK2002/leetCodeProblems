class Solution {
public:

    void powerSet(vector<int>nums,set<vector<int>>&ans,vector<int>&temp,int i,int n){
        if(i>=n) {
          vector<int>cp = temp;
          sort(cp.begin(),cp.end());
            ans.insert(cp);

            return ;
        }

        temp.push_back(nums[i])
;        powerSet(nums,ans,temp,i+1,n);
        temp.pop_back();
        powerSet(nums,ans,temp,i+1,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   

        vector<int> temp;
        set<vector<int>> ans;
        int i = 0;
        int n= nums.size();
        powerSet(nums,ans,temp,0,n);


        vector<vector<int>> res;
        for(auto i:ans){
            res.push_back(i);
        }










        return res;
    }
};