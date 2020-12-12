class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i, n =arr.size(),ans;
        unordered_map <int,int> hash;
        for(i=0;i<n;i++)
            hash[arr[i]]=1;
        i=1;
        while(k){
            if(hash[i]==0)
                k--;
            ans=i;
            i++;
        }
        return ans;
    }
};