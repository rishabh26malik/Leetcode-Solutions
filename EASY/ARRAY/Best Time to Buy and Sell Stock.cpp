class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), i, mx;
        if(n==0)
            return 0;
        vector <int> nextMax(n,-1);
        mx=prices[n-1];
        for(i=n-1;i>=0;i--){
            if(mx > prices[i]){
                //mx=prices[i];
                nextMax[i]=mx;
            }
            else{
                mx=prices[i];
            }    
        }
        mx=-1;
        for(i=0;i<n;i++){
            if(nextMax[i]==-1)
                continue;
            mx=max(mx, nextMax[i]-prices[i]);
        }
        return max(mx,0);
    }
};