class Solution {
public:
    bool checkRecord(string s) {
        int abs=0, late=0, i, n=s.length(), j;
        for(auto ch : s){
            if(ch=='A')
                abs++;
        }
        i=0;
        while(i<n){
            if(s[i]=='L'){
                late=1;
                j=i+1;
                while(j<n && s[j]=='L'){
                    late++;
                    j++;
                }
                if(late>2)
                    return false;
                i=j;
            }
            else{
                i++;
            }
        }
        if(late<=2 && abs<=1)
            return true;
        return false;
    }
};