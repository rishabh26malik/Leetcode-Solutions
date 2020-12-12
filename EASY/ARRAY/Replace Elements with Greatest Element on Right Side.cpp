class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i, n=arr.size(), prev;
        vector <int> out(n);
        out[n-1]=-1;
        prev=arr[n-1];
        for(i=n-2;i>=0;i--){
            out[i]=prev;
            prev=(prev < arr[i]) ? arr[i] : prev;
        }
        return out;
    }
};