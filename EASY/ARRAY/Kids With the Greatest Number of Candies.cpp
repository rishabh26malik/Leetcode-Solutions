
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=-1, i, n=candies.size();
        vector <bool> out(n,false);
        for(auto x : candies)
            mx=max(mx,x);
        for(i=0;i<n;i++){
            if(candies[i]+extraCandies >= mx)
                out[i]=true;
        }
        return out;
    }
};