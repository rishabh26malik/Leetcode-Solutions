class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int i, n=arr.size(), count=0, ans=-1, j;
        for(i=0;i<n;i++){
            if(arr[i]){
                for(j=i;j<n && arr[j]==1;j++){
                    if(arr[j])
                        count++;
                }
                ans=max(ans, count);
                i=j;
                count=0;
            }
            
        }
        return max(ans,0);
    }
};