class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int i,n=arr.size();
        unordered_map <int,int> hash;
        for(i=0;i<n;i++){
            if(hash.find(arr[i])==hash.end())
                hash[arr[i]]=i;
            else{
                if(abs(hash[arr[i]]-i)<=k)
                    return true;
                else if( abs(hash[arr[i]]-i)>k )
                    hash[arr[i]]=i;
            }
        }
        return false;
    }
};