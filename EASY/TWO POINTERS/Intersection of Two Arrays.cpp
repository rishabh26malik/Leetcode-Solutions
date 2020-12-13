class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        int i,n=arr1.size();
        vector <int> out;
        set <int> S;
        for(i=0;i<n;i++)
            S.insert(arr1[i]);
        n=arr2.size();
        for(i=0;i<n;i++){
            if(S.find(arr2[i]) != S.end()){
                out.push_back(arr2[i]);
                S.erase(S.find(arr2[i]));
            }
        }
        return out;
    }
};