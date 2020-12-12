class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        unordered_map <int,int> hash;
        vector <int> out;
        int i, n=arr.size();
        for(i=0;i<n;i++)
            hash[arr[i]]=i;
        for(i=0;i<n;i++){
            if(hash.find(k-arr[i])!=hash.end() && hash[k-arr[i]]!=i){
                out.push_back(i);
                out.push_back(hash[k-arr[i]]);
                break;
                //return {i,hash[k-arr[i]]};
            }
        }
        return out;
    }
};