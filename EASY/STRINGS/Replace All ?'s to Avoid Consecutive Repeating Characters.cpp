class Solution {
public:
    string modifyString(string s) {
        int i, n=s.length();
        for(i=0;i<n;i++){
            if(s[i]=='?'){
                if(i==0){
                    if(s[1]=='a')
                        s[0]='b';
                    else
                        s[0]='a';
                }
                else if(i==n-1){
                    if(s[n-2]=='a')
                        s[n-1]='b';
                    else
                        s[n-1]='a';
                }
                else{
                    if(s[i-1]!='a' && s[i+1]!='a' )
                        s[i]='a';
                    else if(s[i-1]!='b' && s[i+1]!='b' )
                        s[i]='b';
                    else if(s[i-1]!='c' && s[i+1]!='c' )
                        s[i]='c';
                }
            }
        }
        return s;
    }
};