class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> S;
        S.push("main");
        for( auto x : logs){
            if(x=="../"){
                if(S.top()=="main")
                    continue;
                S.pop();
            }
            else if(x=="./"){
                continue;
            }
            else{
                S.push(x.substr(0,x.length()-2));
            }
        }
        if(S.empty())
            return 0;
        return S.size()-1;
    }
};