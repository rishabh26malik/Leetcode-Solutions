class Solution {
public:
    bool check(int n){
        while(n){
            if(n%10==0)
                return false;
            n/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        int l=1, r=n-1;
        vector <int> out(2);
        while(l<=r){
            if(check(l) && check(r)){
                out[0]=l;
                out[1]=r;
                return out;
            }
            l++;
            r--;
        }
        return out;
    }
};