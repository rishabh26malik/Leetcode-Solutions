class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector <string> words, out;
        string word="";
        int i, n;
        text+=" ";
        for(auto ch : text){
            if(ch == ' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=ch;
            }
        }
        n=words.size();
        for(i=0;i<n-2;i++){
            if(words[i]==first && words[i+1]==second)
                out.push_back(words[i+2]);
        }
        return out;
    }
};