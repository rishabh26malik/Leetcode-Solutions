class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> out;
        int i, n=nums.size();
        for(i=0;i<n;i++){
            out.insert(out.begin()+index[i], nums[i]);
        }
        return out;
    }
};