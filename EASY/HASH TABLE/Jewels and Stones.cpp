class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map <char,int> hash;
        int c=0;
        for(auto x : J)
            hash[x]=1;
        for(auto x : S){
            if(hash.find(x)!=hash.end())
                c++;
        }
        return c;
    }
};