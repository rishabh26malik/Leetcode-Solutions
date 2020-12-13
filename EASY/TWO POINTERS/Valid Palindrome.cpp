class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int i,n=s.length(),left , right;
        left=0;
        for(i=0;i<n;i++){
            if(isalpha(s[i]))
                str+=tolower(s[i]);
            else if(isdigit(s[i]))
                str+=s[i];
        }
        right=str.length()-1;
        while(left < right){
            if(str[left]!=str[right])
                return false;
            left++;
            right--;
        }
        return true;
        
    }
};