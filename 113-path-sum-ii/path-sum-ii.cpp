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
    void solve(TreeNode* root, int sum,vector<vector<int>>&ans,int targetSum,vector<int>temp){
       
        sum +=root->val;
        temp.push_back(root->val);
        if(!root->left and !root->right){
            if(sum==targetSum) {
                ans.push_back(temp);
            }
            return;
        }
    if(root->left)solve(root->left,sum,ans,targetSum,temp);
    if(root->right)solve(root->right,sum,ans,targetSum,temp);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        if(!root) return {};
        vector<int>temp;
        solve(root,0,ans,targetSum,temp);
        return ans;
    }
};