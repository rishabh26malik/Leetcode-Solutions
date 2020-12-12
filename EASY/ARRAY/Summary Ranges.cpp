class Solution {
public:
    vector<string> summaryRanges(vector<int>& arr) {
        int i, row=0, n=arr.size(), prev;
        vector <pair<int,int>> out;
        vector <string> res;
        if(n==0)
            return res;
        out.push_back({arr[0],arr[0]});
        prev=arr[0];
        for(i=1;i<n;i++){
            if(arr[i]==prev+1){
                out[row].second++;
            }
            else{
                out.push_back({arr[i],arr[i]});
                row++;
            }
            prev=arr[i];
        }
        
        for(auto p : out){
            string str;
            if(p.first != p.second)
                str=to_string(p.first)+"->"+to_string(p.second);
            else
                str=to_string(p.first);
            res.push_back(str);
        }
        return res;
    }
};