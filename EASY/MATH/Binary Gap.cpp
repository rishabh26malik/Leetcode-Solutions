class Solution {
public:
    int binaryGap(int n) {
        if(ceil(log2(n)) == floor(log2(n)))
            return 0;
        int res=-1, i, len, prev=-1;
        string str="";
        while(n){
            str=to_string(n%2)+str;
            n=n>>1;
        }
        len=str.length();
        cout<<str<<endl;
        for(i=0;i<len;i++){
            if(str[i]=='1'){
                if(prev==-1)
                    prev=i;
                else if(res < i-prev){
                    res=i-prev;
                    
                }
                prev=i;
                cout<<res<<" "<<prev<<endl;
            }
        }
        return res;
    }
};