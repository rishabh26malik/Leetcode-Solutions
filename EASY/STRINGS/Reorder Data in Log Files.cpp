class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector < pair<string,string> > let_logs;
        vector <string> out;
        int idx;
        string str, key;
        char ch=' ';
        for(auto log : logs ){
            idx=log.find(ch);
            str=log.substr(idx+1);
            if(isalpha(str[0])){
                key=log.substr(0,idx);
                let_logs.push_back({key,str});
                //cout<<key<<" "<<str<<endl;
            }
            else{
                out.push_back(log);
            }
        }
        sort(let_logs.begin(), let_logs.end(), [&](auto &a, auto &b){
           return (a.second==b.second) ? a.first < b.first : a.second < b.second; 
        });
        int i,n=let_logs.size();
        for(i=n-1;i>=0;i--){
            out.insert(out.begin(), let_logs[i].first+" "+let_logs[i].second);
        }
        return out;
    }
};