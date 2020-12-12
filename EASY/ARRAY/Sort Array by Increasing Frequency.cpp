class Solution {
public:
    
    vector<int> frequencySort(vector<int>& arr) {
        unordered_map <int,int> hash;
        for(int num : arr)
            hash[num]++;
        sort(arr.begin(), arr.end(), [&](int a, int b){
            if(hash[a]!=hash[b])
            return hash[a] < hash[b];
        return a>b;
        });
        return arr;
    }
};