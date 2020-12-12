class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i, n=arr.size(), prev;
        prev=arr[0];
        for(i=1;i<n;i++){
            if(arr[i] < prev)
                break;
            if(arr[i]==prev)
                return false;
            prev=arr[i];
        }
        if(i==1 || i==n)
            return false;
        for(;i<n;i++){
            if(arr[i]>=prev)
                return false;
            prev=arr[i];
        }
        
        return true;
    }
};