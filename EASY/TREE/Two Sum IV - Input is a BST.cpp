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
    void preorder(TreeNode *root, map <int,int> &hash){
        if(root){
            hash[root->val]++;
            preorder(root->left, hash);
            preorder(root->right, hash);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        map <int,int> hash;
        bool ret=false;
        preorder(root, hash);
        for(auto it=hash.begin(); it!=hash.end(); it++){
            if(hash.find(k-it->first)!=hash.end() && hash.find(k-it->first)!=it)
                return true;
        }
        return false;
    }
};