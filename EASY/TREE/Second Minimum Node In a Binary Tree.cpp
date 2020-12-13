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
    long long int solve(TreeNode* root, int k){
        if(!root)
            return LONG_MAX;
        if(root->val != k)
            return root->val;
        return min(solve(root->left,k),solve(root->right,k));
             
    }
    int findSecondMinimumValue(TreeNode* root) {
        
        long long int ret=solve(root,root->val);
        if(ret==LONG_MAX)
            return -1;
        return ret;  
    }
};