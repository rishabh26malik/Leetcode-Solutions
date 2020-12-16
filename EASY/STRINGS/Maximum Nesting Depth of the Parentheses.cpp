class Solution {
public:
    int maxDepth(string s) {
        stack <char> S;
        int ans=0;
        for(auto ch : s){
            if(ch=='('){
                S.push(ch);
                ans=(ans < S.size()) ? S.size() : ans;
            }
            else if(ch==')'){
                S.pop();
            }
        }
        return ans;
    }
};