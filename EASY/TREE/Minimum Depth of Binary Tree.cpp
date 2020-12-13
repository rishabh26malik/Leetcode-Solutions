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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        queue <TreeNode*> Q;
        TreeNode* tmp;
        int lvl=0;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()){
            tmp=Q.front();
            Q.pop();
            if(tmp==NULL){
                lvl++;
                if(!Q.empty())
                    Q.push(NULL);
            }
            else{
                if(!tmp->left && !tmp->right)
                    return lvl+1;
                if(tmp->left)
                    Q.push(tmp->left);
                if(tmp->right)
                    Q.push(tmp->right);
            }
        }
        return lvl;
    }
};