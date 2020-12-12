class Solution {
public:
    int heightChecker(vector<int>& arr) {
        int ans=0, i, n=arr.size();
        int count[101]={0};
        for(int num : arr){
            count[num]++;
        }
        vector <int> out;
        for(i=1;i<101;i++){
            while(count[i]--)
                out.push_back(i);
        }
        for(i=0;i<n;i++){
            if(arr[i]!=out[i])
                ans++;
        }
        return ans;
    }
};