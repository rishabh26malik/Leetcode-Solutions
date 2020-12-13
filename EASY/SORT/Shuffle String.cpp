class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string out;
        int i, n=s.length();
        for(auto ch : s)
            out+='x';
        for(i=0;i<n;i++){
            out[indices[i]]=s[i];
        }
        return out;
    }
};