class Solution {
public:
    string reverseVowels(string str) {
        int l,r,n=str.size();
        set <char> S;
        S.insert('a');
        S.insert('e');
        S.insert('i');
        S.insert('o');
        S.insert('u');
        S.insert('A');
        S.insert('E');
        S.insert('I');
        S.insert('O');
        S.insert('U');
        l=0;
        r=n-1;
        while(l<r){
            if(S.find(str[l])==S.end())
            {
                l++;
            }
            if(S.find(str[r])==S.end())
            {
                r--;
            }
            if(S.find(str[l])!=S.end() && S.find(str[r])!=S.end() )
            {
                swap(str[l],str[r]);
                l++;
                r--;
            }
        }
        return str;
    }
};