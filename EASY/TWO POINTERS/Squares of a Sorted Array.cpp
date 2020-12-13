class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int i,n=arr.size();
        for(i=0;i<n;i++){
            arr[i]*=arr[i];
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};