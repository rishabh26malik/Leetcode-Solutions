class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        if(target.back() < n)
            n=target.back();
        unordered_set <int> S(target.begin(), target.end());
        vector <string> opr;
        for(int i=1;i<=n;i++){
            if(S.find(i)!=S.end()){
                opr.push_back("Push");
            }
            else{
                opr.push_back("Push");
                opr.push_back("Pop");
            }
        }
        return opr;
    }
};