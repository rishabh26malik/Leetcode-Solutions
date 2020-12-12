class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum, res=-1;
        for(auto row : accounts){
            sum=0;
            for(int val : row){
                sum+=val;
            }
            res=(sum > res) ? sum : res;
        }
        return res;
    }
};