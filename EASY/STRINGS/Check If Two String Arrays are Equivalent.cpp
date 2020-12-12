class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        for(auto val : word1)
            s1+=val;
        for(auto val : word2)
            s2+=val;
        return s1==s2;
    }
};