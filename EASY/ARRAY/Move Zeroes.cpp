class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0, i, n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<n){
            nums[j]=0;
            j++;
        }
    }
};