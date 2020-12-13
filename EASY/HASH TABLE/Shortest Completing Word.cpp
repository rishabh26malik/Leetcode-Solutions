class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string res="qwertyuiopasdfghjklzxcvbnm";
        unordered_map <char,int> hash;
        int flag;
        for(auto ch : licensePlate){
            if(isalpha(ch)){
                hash[tolower(ch)]++;
            }   
        }
        
        for(auto word : words){
            unordered_map <char,int> hash2;
            flag=1;
            for(auto ch : word){
                if(hash.find(ch)!=hash.end()){
                    hash2[ch]++;
                }
            }
            if(hash.size() == hash2.size()){
                cout<<word<<endl;
                for(auto x : hash){
                    cout<<x.first<<" "<<x.second<<endl;
                    if(x.second>hash2[x.first]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    if(res.length() > word.length())
                        res=word;
                }
            }
        }
        return res;
    }
};