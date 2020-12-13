class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> hash, hash2;
        int i=0, n=s.length();
        for(i=0;i<n;i++){
            if(hash.find(s[i])==hash.end() &&  hash2.find(t[i])==hash2.end()){
                hash[s[i]]=t[i];
                hash2[t[i]]=s[i];
            }
            else{
                if(hash[s[i]]!=t[i] || hash2[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};