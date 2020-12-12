class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int i=0, n=arr.size();
        vector <int> out, tmp=arr;
        unordered_map <int,int> hash;
        sort(tmp.begin(), tmp.end());
        for(int num : tmp){
            if(hash.find(num)!=hash.end()) 
                hash[num]=i;
            else{
                i++;
                hash[num]=i;
            }
        }
        for(int num : arr){
            out.push_back(hash[num]);
        }
        return out;
    }
};