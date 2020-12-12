class Solution {
public:
    int repeatedNTimes(vector<int>& arr) {
        unordered_map <int,int> hash;
        int i,ret,n=arr.size();
        for(i=0;i<n;i++)
            hash[arr[i]]++;
        for(auto it : hash){
            if(it.second == n/2)
            {
                ret=it.first;
                break;
            }
        }
        return ret;
    }
};