class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map <string , int> hash1, hash2;
        A=A+" ";
        B=B+" ";
        vector <string> res;
        string out="";
        int i,n=A.length();
        for(i=0;i<n;i++){
            if(A[i]!=' ')
                out+=A[i];
            else{
                hash1[out]++;
                out="";
            }
        }
        out="";
        n=B.length();
        for(i=0;i<n;i++){
            if(B[i]!=' ')
                out+=B[i];
            else{
                hash2[out]++;
                out="";
            }
        }
        for(auto it=hash1.begin(); it!=hash1.end(); it++){
            if(it->second ==1 && hash2[it->first]==0)
                res.push_back(it->first);
        }
        for(auto it=hash2.begin(); it!=hash2.end(); it++){
            if(it->second ==1 && hash1[it->first]==0)
                res.push_back(it->first);
        }
        return res;
    }
};