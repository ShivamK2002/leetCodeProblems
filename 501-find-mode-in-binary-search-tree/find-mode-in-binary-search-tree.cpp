/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(unordered_map<int,int>&mpp,TreeNode* root){
        if(!root) return;
        mpp[root->val]++;
        if(root->left) solve(mpp,root->left);
        if(root->right) solve(mpp,root->right);
        

    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mpp;
       solve(mpp,root); 
        int maxi = INT_MIN;
        for(auto i:mpp){
            maxi = max(maxi,i.second);
        }


       vector<int>ans;
       bool flag = true;
        for(auto i:mpp){
            if(i.second==maxi) {
                ans.push_back(i.first);
                flag = false;
            }
        }
        if(flag){
            for(auto i:mpp) ans.push_back(i.first);
        }
    
       if(ans.empty())return {0};
       return ans;
    }
};