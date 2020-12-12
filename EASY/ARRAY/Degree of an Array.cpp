class Solution {
public:
    int max(int a, int b){
        if(a>b)
            return a;
        return b;
    }
    int findShortestSubArray(vector<int>& arr) {
        int freq[50000]={0}, i, n=arr.size(), val, maxFreq=-1, ans=INT_MAX ;
        int start, end;
        unordered_map <int, vector<int>> hash;
        for(i=0;i<n;i++){
            hash[arr[i]].push_back(i);
        }
        for(i=0;i<n;i++){
            maxFreq=max(maxFreq, hash[arr[i]].size());
        }
        for(i=0;i<n;i++){
            if(maxFreq == hash[arr[i]].size()){
                start=hash[arr[i]][0];
                end=hash[arr[i]][hash[arr[i]].size()-1];
                ans=min(ans, end-start+1);
            }
        }
        return ans;
        /*for(i=0;i<n;i++){
            freq[arr[i]]++;
            if(maxFreq < freq[arr[i]]){
                maxFreq=freq[arr[i]];
                val=arr[i];
                end=i;
            }
        }
        for(i=0;i<n;i++)
            if(arr[i]==val){
                start=i;
                break;
            }*/
        return end-start+1;
    }
};