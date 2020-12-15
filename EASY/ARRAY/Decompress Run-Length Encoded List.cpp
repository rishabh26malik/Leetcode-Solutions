class Solution {
public:
    vector<int> decompressRLElist(vector<int>& arr) {
        int i, n=arr.size();
        vector <int> out;
        for(i=0;i<n;i+=2){
            int freq=arr[i];
            while(freq--)
                out.push_back(arr[i+1]);
        }
        return out;
    }
};