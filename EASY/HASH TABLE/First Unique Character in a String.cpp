class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> hash;
        int i, n=s.length();
        for(i=0;i<n;i++)
            hash[s[i]]++;
        for(i=0;i<n;i++){
            if(hash.find(s[i])!=hash.end() && hash[s[i]]==1)
                return i;
        }
        return -1;
    }
};