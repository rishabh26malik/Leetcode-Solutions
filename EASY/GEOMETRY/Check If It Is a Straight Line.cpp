class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        int slope_num, slope_den;
        slope_num=arr[1][1]-arr[0][1];
        slope_den=arr[1][0]-arr[0][0];
        for(auto pt : arr){
            if(slope_den*(pt[1]-arr[0][1]) != slope_num*(pt[0]-arr[0][0]))
                return false;
        }
        return true;
    }
};