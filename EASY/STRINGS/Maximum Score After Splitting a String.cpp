class Solution {
public:
    int maxScore(string s) {
        int i,n=s.length(),ans=-1;
        if(s.find('0')==string::npos)
            return n-1;
        if(s.find('1')==string::npos)
            return n-1;
        int left=0, right=0;
        if(s[0]=='0')
            left=1;
        for(i=1;i<n;i++){
            if(s[i]=='1')
                right++;
        }
        ans=left+right;
        for(i=1;i<n-1;i++){
            if(s[i]=='1'){
                right--;
            }
            else{
                left++;
            }
            ans=max(ans,left+right);
        }
        return ans;
    }
};