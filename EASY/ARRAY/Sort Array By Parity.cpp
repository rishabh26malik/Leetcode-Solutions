class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector <int> out;
        for(auto x : A){
            if(x%2==0)
                out.push_back(x);
        }
        for(auto x : A){
            if(x&1==1)
                out.push_back(x);
        }
        return out;
    }
};