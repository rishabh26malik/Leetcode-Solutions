class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int i, n=code.size(), sum=0, idx=1;
        vector <int> out(n,0);
        if(k==0)
            return out;
        if(k>0){
            for(i=1;i<=k;i++){
                sum+=code[idx];
                idx=(idx+1)%n;
            }

            for(i=0;i<n;i++){
                out[i]=sum;
                sum-=code[(i+1)%n];
                sum+=code[(idx)%n];
                idx=(idx+1)%n;
            }
            return out;
        }
        k=k*-1;
        idx=n-k;
        for(i=1;i<=k;i++){
            sum+=code[idx];
            idx=(idx+1)%n;
        }
        int prev=n-k;
        for(i=0;i<n;i++){
            out[i]=sum;
            sum-=code[prev];
            sum+=code[(idx)%n];
            idx=(idx+1)%n;
            prev=(prev+1)%n;
        }
            return out;
    }
};