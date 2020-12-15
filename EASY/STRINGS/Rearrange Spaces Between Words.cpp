class Solution {
public:
    string reorderSpaces(string text) {
        vector <string> words;
        string tmp=text;
        text+=" ";
        string word="", out="", space="";
        int count=0, n, rem,i;
        for(auto ch : text){
            if(word!="" && ch==' '){
                words.push_back(word);
                word="";
                count++;
            }
            else if(ch!=' '){
                word+=ch;
            }
            else if(ch==' ')
                count++;
        }
        count--;
        //cout<<count<<" "<<words.size();
        if(count==0)
            return tmp;
        if(words.size()>1){            
            n=count/(words.size()-1);
            rem=count - n*(words.size()-1);
        }
        else{
            while(count--)
                space+=" ";
            return words[0]+space;
        }
            
        space="";
        //cout<<n<<" ";
        while(n--)
            space+=" ";
        //cout<<space.length();
        for(i=0;i<words.size();i++){
            out+=words[i];
            if(i<words.size()-1)
                out+=space;
        }
        space="";
        while(rem--)
            space+=" ";
        out+=space;
        return out;
    }
};