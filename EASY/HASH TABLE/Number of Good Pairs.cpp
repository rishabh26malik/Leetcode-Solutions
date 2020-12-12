#include <unordered_map> 

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i, n =nums.size(),res=0;
        int arr[101]={0};
        memset(arr,0,sizeof(arr));
        for(i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(i=1;i<101;i++){
            if(arr[i] > 1){
                res += (arr[i])*(arr[i] - 1)/2;
            }
        }
        return res;
    }
};