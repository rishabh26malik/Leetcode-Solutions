class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set <char> S;
        int c=0, flag;
        for(auto ch : allowed)
            S.insert(ch);
        for(auto word : words){
            flag=1;
            for(auto ch : word){
                if(S.find(ch)==S.end()){
                    flag=0;
                    break;
                }
            }
            if(flag)
                c++;
        }
        return c;
    }
};