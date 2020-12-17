class Solution {
public:
    vector<int> sumZero(int n) {
        int neg=-1, pos=1;
        vector <int> out;
        if(n==1){
            //vector <int> res{1};
            return {0};//res;
        }
        if(n&1 == 1){
            out.push_back(0);
            n--;
        }
        while(n){
            out.push_back(pos);
            out.push_back(neg);
            neg--;
            pos++;
            n-=2;
        } 
        return out;
    }
};