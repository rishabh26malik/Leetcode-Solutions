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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector<int>> out;
        if(!root)
            return out;
        queue <TreeNode*> Q;
        
        vector <int> lvl;
        TreeNode* tmp;
        Q.push(root);
        Q.push(NULL);
        while(!Q.empty()){
            tmp=Q.front();
            Q.pop();
            if(tmp==NULL){
                out.insert(out.begin(),lvl);
                lvl.clear();
                if(!Q.empty())
                    Q.push(NULL);
            }
            else{
                lvl.insert(lvl.begin(),tmp->val);
                if(tmp->right)
                    Q.push(tmp->right);
                if(tmp->left)
                    Q.push(tmp->left);
            }
        }
        return out;
    }
};