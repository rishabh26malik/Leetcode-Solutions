class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int i, n=startTime.size(), ans=0;
        for(i=0;i<n;i++){
            if(startTime[i] <= queryTime && queryTime <= endTime[i]){
                ans++;
            }
        }
        return ans;
    }
};