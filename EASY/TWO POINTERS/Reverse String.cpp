class Solution {
public:
    void reverseString(vector<char>& str) {
        int l,r,n=str.size();
        l=0;
        r=n-1;
        while(l<r){
            swap(str[l],str[r]);
            l++;
            r--;
        }
    }
};