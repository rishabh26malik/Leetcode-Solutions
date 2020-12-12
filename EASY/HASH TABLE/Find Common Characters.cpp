class Solution {
public:
    vector<string> commonChars(vector<string>& str) {
        int j,len;
        vector <string> out;
        vector <int> res(26, INT_MAX);
        //memset(res,INT_MAX,26);
        int i,n=str.size();
        for(i=0;i<n;i++){
            int freq[26]={0};
            len=str[i].length();
            for(j=0;j<len;j++)
                freq[str[i][j]-'a']++;
            for(j=0;j<26;j++)
                res[j]=min(res[j],freq[j]);
        }
        for(i=0;i<26;i++){
            for(j=0;j<res[i];j++)
                out.push_back(string(1,i + 'a'));
            /*if(res[i]){
                while(res[i]--)
                    out.push_back(string(1, i + 'a'));
            }*/
        }
        return out;
    }
};