class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int i, n=arr.size(),Xor=0;
        for(i=0;i<n;i++)
            Xor ^= arr[i];
        return Xor;
    }
};