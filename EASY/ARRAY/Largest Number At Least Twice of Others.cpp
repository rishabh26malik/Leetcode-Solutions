class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx=-1, secondMax=-1, res, i=0;
        for(auto x : nums){
            if(x > mx){
                secondMax=mx;
                mx=x;
                res=i;
            }
            else if(x > secondMax){
                secondMax=x;
            }
            i++;
        }
        if(secondMax*2<=mx)
            return res;
        return -1;
    }
};