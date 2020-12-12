class Solution {
public:
    string thousandSeparator(int num) {
        string str=to_string(num), res;
        int i, n=str.size(), idx=n-4;
        for(i=n-1;i>=0;i--){
            if(i!=idx){
                res=str[i]+res;
            }
            else{
                res="."+res;
                res=str[i]+res;
                idx-=3;
            }
        }
        return res;
    }
};