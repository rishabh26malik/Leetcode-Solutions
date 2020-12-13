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
    void preorder(TreeNode *root, vector <int> &leaves){
        if(root){
            if(!root->left && !root->right)
                leaves.push_back(root->val);
            preorder(root->left,leaves);
            preorder(root->right, leaves);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> leaf1, leaf2;
        preorder(root1, leaf1);
        preorder(root2, leaf2);
        if(leaf1.size()==leaf2.size()){
            int n=leaf1.size();
            for(int i=0;i<n;i++){
                if(leaf1[i]!=leaf2[i])
                    return false;
            }
            return true;
        }
        return false;
    }
};