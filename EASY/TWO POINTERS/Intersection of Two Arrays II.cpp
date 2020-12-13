class Solution {
public:
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {
        unordered_map <int,int> hash;
        vector <int> out;
        int i,n=arr1.size();
        for(i=0;i<n;i++)
            hash[arr1[i]]++;
        n=arr2.size();
        for(i=0;i<n;i++){
            if(hash[arr2[i]]>0){
                out.push_back(arr2[i]);
                hash[arr2[i]]--;
            }
        }
        return out;
    }
};