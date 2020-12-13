/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        queue <Node*> Q;
        Node *tmp;
        int depth=0,len;
        Q.push(root);
        while(!Q.empty()){
            
            
            len=Q.size();
            while(len--){
                tmp=Q.front();
                Q.pop();
                for(auto child : tmp->children){
                    if(child)   
                        Q.push(child);
                }
            }
            depth++;
            
        }
        return depth;
    }
};