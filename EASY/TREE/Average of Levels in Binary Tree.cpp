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
    vector<double> averageOfLevels(TreeNode* root) {
        TreeNode *tmp;
        vector <double> out;
        queue <TreeNode*> Q;
        Q.push(root);
        Q.push(NULL);
        double sum=0, avg,n=0;
        while(!Q.empty()){
            tmp=Q.front();
            Q.pop();
            if(!tmp){
                if(!Q.empty())
                    Q.push(NULL);
                avg=sum/n;
                n=0;
                sum=0;
                out.push_back(avg);
                
            }
            else{
                sum+=tmp->val;
                n++;
                if(tmp->left)
                    Q.push(tmp->left);
                if(tmp->right)
                    Q.push(tmp->right);
            }
        }
        return out;
    }
};