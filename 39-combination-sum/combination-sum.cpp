class Solution {
public:

    void solve(vector<int>&candidates,int target,int index,vector<int>temp,vector<vector<int>>&ans){
        if(index==candidates.size()){
            if(target==0) ans.push_back(temp);
            return;
        }
        if(target>=candidates[index]){
        temp.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index,temp,ans);
        temp.pop_back();
        }
        solve(candidates,target,index+1,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,target,0,temp,ans);
        return ans;
    }
};