class Solution {
public:
    string removeOuterParentheses(string S) {
        stack <char> stk;
        string str="", out="";
        for(auto ch : S){
            str+=ch;
            if(ch=='('){
                stk.push(ch);
            }
            else{
                stk.pop();
            }
            if(stk.empty()){
                //cout<<str<<" "<<str.substr(1,str.length()-1)<<endl;
                out+=str.substr(1,str.length()-2);
                str="";
            }
        }
        return out;
    }
};