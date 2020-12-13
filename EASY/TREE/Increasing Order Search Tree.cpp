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
    void inorder(TreeNode *root, TreeNode *&ret, TreeNode *&last){
        if(root){
            inorder(root->left, ret, last);
            //cout<<(root->val)<<endl;
            TreeNode *nd=(TreeNode*)malloc(sizeof(TreeNode));
            nd->left=NULL;
            nd->right=NULL;
            nd->val=root->val;
            if(ret==NULL){
                ret=nd;
                last=nd;
            }
            else{
                last->right=nd;
                last=nd;
            }
            inorder(root->right, ret, last);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *ret=NULL,*last=NULL;
        inorder(root, ret, last);
        return ret;
    }
};