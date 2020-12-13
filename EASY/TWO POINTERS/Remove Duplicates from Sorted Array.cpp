class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,n=nums.size(),j=1;
        if(n<=1)
            return n;
        i=1;
        while(i<n){
            if(nums[i]!=nums[i-1])
            {
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
};