class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i,n=S.length(),j=-1;
        string s1="",s2="";
        for(i=0;i<n;i++)
            if(isalpha(S[i]))
                break;
        for(;i<n;i++){
            if(S[i]=='#'){
                if(j==-1)
                    continue;
                s1.erase(j,1);
                j--;
            }
            else{
                s1+=S[i];
                j++;
            }
        }
        n=T.length();
        j=-1;
        for(i=0;i<n;i++)
            if(isalpha(T[i]))
                break;
        for(;i<n;i++){
            if(T[i]=='#'){
                if(j==-1)
                    continue;
                s2.erase(j,1);
                j--;
            }
            else{
                s2+=T[i];
                j++;
            }
        }
        if(s1==s2)
            return true;
        return false;
    }
};