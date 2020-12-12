class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> hash;
        if(s.length() != t.length())
            return false;
        int i,n=s.length();
        for(i=0;i<n;i++)
            hash[s[i]]++;
        n=t.length();
        for(i=0;i<n;i++){
            hash[t[i]]--;
            if(hash[t[i]]<0)
                return false;
        }
        return true;
    }
};