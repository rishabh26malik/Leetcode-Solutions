class Solution {
public:
    string toGoatLatin(string str) {
        vector <string> words;
        string word="", out="", tmp="a";
        unordered_set <char> S{'a','e','i','o','u','A','E','I','O','U'};
        str+=" ";
        for(auto ch : str){
            if(ch==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=ch;
            }
        }
        for(auto x : words){
            if(S.find(x[0])!=S.end()){
                word=x+"ma"+tmp;
            }
            else{
                word=x.substr(1)+x[0]+"ma"+tmp;
            }
            tmp+="a";
            out+=word+" ";
        }
        return out.substr(0,out.length()-1);
    }
};