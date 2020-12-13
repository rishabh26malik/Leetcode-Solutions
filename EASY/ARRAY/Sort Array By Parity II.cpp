class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int i=0, j=1, n=A.size();
        vector <int> out(n);
        for(auto x : A){
            if(x%2==0){
                out[i]=x;
                i+=2;
            }
        }
        for(auto x : A){
            if(x&1==1){
                out[j]=x;
                j+=2;
            }
        }
        return out;
    }
};