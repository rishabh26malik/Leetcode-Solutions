class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char, int> hash;
        int i, n=s.length(), c=0, odd=0, flag=0;
        for(i=0;i<n;i++)
            hash[s[i]]++;
        for(auto it=hash.begin(); it!=hash.end(); it++){
            if(it->second % 2 == 0)
                c+=it->second;
            else{
                if(it->second > 1){
                    flag=1;
                    c=c + it->second - 1;
                }
                else
                    odd++;
            }
        }
        if(odd || flag)
            c++;
        return c;
    }
};