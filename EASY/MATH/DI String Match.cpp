class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n=S.length(), inc=0, dec=n;
        int i=0;
        vector <int> out(n+1);
        for(auto ch : S){
            if(ch=='I'){
                out[i]=inc;
                inc++;
            }
            else{
                out[i]=dec;
                dec--;
            }
            i++;
        }
        if(S[n-1]=='I')
            out[n]=inc;
        else
            out[n]=dec;
        return out;
    }
};