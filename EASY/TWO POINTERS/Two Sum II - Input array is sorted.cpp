class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        int i,j;
        i=0;
        j=arr.size()-1;
        while(i < j){
            if(arr[i]+arr[j] > k)
                j--;
            else if (arr[i]+arr[j] < k)
                i++;
            else
                return {i+1,j+1};
        }
        return {};
    }
};