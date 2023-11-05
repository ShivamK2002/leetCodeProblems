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
    void solve(TreeNode* root, int sum,bool &ans,int targetSum){
       
        sum +=root->val;
        cout<<sum<<endl;
        if(!root->left and !root->right){
            if(sum==targetSum) ans = true;
            return;
        }
    if(root->left)solve(root->left,sum,ans,targetSum);
    if(root->right)solve(root->right,sum,ans,targetSum);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        if(!root) return false;
        solve(root,0,ans,targetSum);
        return ans;
    }
};