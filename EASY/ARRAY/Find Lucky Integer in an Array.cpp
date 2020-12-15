class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size(), res=-1;
        unordered_map <int,int> hash;
        for(auto x : arr){
            hash[x]++;
        }
        for(auto x :arr){
            if(hash[x]==x){
                if(res<x)
                    res=x;
            }
        }
        return res;
    }
};