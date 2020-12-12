class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int,int> hash;
        int i,n=nums.size(),a,b;
        for(i=0;i<n;i++){
            hash[nums[i]]++;
            if(hash[nums[i]]==2)
                a=nums[i];
        }
        for(i=1;i<=n;i++){
            if(hash.find(i)==hash.end())
                b=i;
        }
        return {a,b};
    }
};