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
    void preorder(TreeNode *root, string path, vector <string> &out){
        if(root){
            if(!root->left && !root->right){
                path+=to_string(root->val);
                out.push_back(path);
                return;
            }
            path+=to_string(root->val)+"->";
            preorder(root->left,path,out);
            preorder(root->right,path,out);
        
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector <string> out;
        string path="";
        preorder(root,path,out );
        return out;
    }
};