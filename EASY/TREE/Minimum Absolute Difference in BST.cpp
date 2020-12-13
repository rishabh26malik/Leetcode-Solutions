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
    void inorder(TreeNode *root, int &prev, int &diff){
        if(root){
            inorder(root->left, prev, diff);
            if(prev==-1)
                prev=root->val;
            else{
                int CurrDiff=abs(root->val - prev);
                prev=root->val;
                if(diff > CurrDiff)
                    diff=CurrDiff;
            }
            inorder(root->right, prev, diff);
        }
    }
    
    int getMinimumDifference(TreeNode* root) {
        int prev=-1,diff=INT_MAX;
        inorder(root, prev, diff);
        return diff;
    }
};