class Solution {
public:
    void combo(vector<vector<int>>&ans,vector<int>candidates,int target, int n, int index,vector<int>&temp){
       if(index>=n) {
         if(target == 0) ans.push_back(temp);
            return;
        }
        if(candidates[index]<=target){
        temp.push_back(candidates[index]);
        combo(ans,candidates,target-candidates[index],n,index,temp);
        temp.pop_back();
        }
        combo(ans,candidates,target,n,index+1,temp);

    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int n = candidates.size();
        vector<int>temp;
        combo(ans,candidates,target,n,0,temp);

        return ans;
    }
};