class Solution {
public:
    int maxNumberOfBalloons(string str) {
        int freq[26]={0};
        int i,n=str.length();
        int b,a,l,o,ans;
        for(i=0;i<n;i++)
            freq[str[i]-'a']++;
        b=freq[1];
        a=freq[0];
        l=freq[11];
        o=freq[14];
        n=freq[13];
        l=l/2;
        o=o/2;
        ans=min(min(l,o),b);
        ans=min(min(ans,a),n);
        return ans;
    }
};