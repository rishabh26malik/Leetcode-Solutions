class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char, string> hash;
        unordered_map <string, char> hash2;
        vector <string> words;
        string word="";
        int i=0;
        s+=" ";
        for(auto x : s){
            if(x==' '){
                words.push_back(word);
                word="";
            }
            else{
                word+=x;
            }
        }
        if(pattern.length() != words.size())
            return false;
        i=0;
        for(auto x : pattern){
            if(hash.find(x)==hash.end() && hash2.find(words[i])==hash2.end() ){
                hash[x]=words[i];
                hash2[words[i]]=x;
            }
            else{
                if(hash[x]!=words[i] || hash2[words[i]]!=x)
                    return false;
            }
            i++;
        }
        return true;
    }
};