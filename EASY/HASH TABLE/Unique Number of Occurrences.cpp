class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set <int> S;
        unordered_map <int,int> hash;
        int i, n =arr.size();
        for(i=0;i<n;i++)
            hash[arr[i]]++;
        for(auto it=hash.begin(); it!=hash.end(); it++){
            if(S.find(it->second)==S.end())
                S.insert(it->second);
            else
                return false;
        }
        return true;
    }
};