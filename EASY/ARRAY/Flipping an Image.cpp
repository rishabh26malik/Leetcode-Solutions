class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        for(auto &row : arr)
            reverse(row.begin(), row.end());
        for(auto &row : arr){
            for(int &val : row)
                val=1-val;
        }
        return arr;
    }
};