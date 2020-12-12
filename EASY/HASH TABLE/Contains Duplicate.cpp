class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int i, n=arr.size();
        unordered_map <int,int > hash;
        for(i=0;i<n;i++){
            hash[arr[i]]++;
            if(hash[arr[i]]>1)
                return true;
        }
        return false;
    }
};