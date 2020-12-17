class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0, dig;
        for(auto x : nums){
            dig= (int)log10(x)+1;
            //cout<<dig<<" ";
            if((dig & 1) ==0)
                count++;
        }
        return count;
    }
};