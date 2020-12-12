class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char,int> hash;
        char ch;
        int i,n=t.length();
        for(i=0;i<n;i++)
            hash[t[i]]++;
        n=s.length();
        for(i=0;i<n;i++)
            hash[s[i]]--;
        for(i=0;i<t.length();i++)
            if(hash[t[i]]>0)
            {
                ch=t[i];
                break;
            }
        return ch;
    }
};