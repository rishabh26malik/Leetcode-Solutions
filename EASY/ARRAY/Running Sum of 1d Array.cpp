class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int sum=0;
        vector <int> out;
        for(int num : arr){
            sum+=num;
            out.push_back(sum);
        }
        return out;
    }
};