class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map <char, int> hash;
        int i=0, j, k, n, len1, len2;
        for(auto ch : order){
            hash[ch]=i;
            i++;
        }
        n=words.size();
        for(i=0;i<n-1;i++){
            j=k=0;
            len1=words[i].length();
            len2=words[i+1].length();
            while(j<len1 && k<len2 && words[i][j]==words[i+1][k]){
                j++;
                k++;
            }
            if(j==len1 && k==len2)
                continue;
            if(j<len1 && k==len2)
                return false;
            if(hash[words[i][j]] > hash[words[i+1][k]])
                return false;
        }
        return true;
    }
};