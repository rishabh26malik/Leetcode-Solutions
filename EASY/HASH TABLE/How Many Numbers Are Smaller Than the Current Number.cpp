class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& arr) {
        int freq[101]={0};
        int i,n=arr.size();
        vector <int> out;
        for(i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(i=1;i<101;i++){
            freq[i]+=freq[i-1];
        }
        for(i=0;i<n;i++){
            if(arr[i]==0)
                out.push_back(0);
            else
                out.push_back(freq[arr[i]-1]);
        }
        return out;
    }
};