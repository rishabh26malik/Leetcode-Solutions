class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int i, n=arr.size(), prev;
        prev=arr[0];
        for(i=1;i<n;i++){
            if(arr[i] < prev)
                break;
            prev=arr[i];
        }
        if(i==n)
            return true;
        prev=arr[n-1];
        for(i=n-2;i>=0;i--){
            if(arr[i] < prev)
                break;
            prev=arr[i];
        }
        if(i==-1)
            return true;
        return false;
    }
};