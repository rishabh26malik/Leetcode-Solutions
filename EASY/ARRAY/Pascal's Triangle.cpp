class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> out;
        int i, j, k, m;
        vector <int> a{1};
        for(i=0;i<n;i++){
            out.push_back(a);
            a.push_back(1);
        }
        m=2;
        for(i=1;i<n-1;i++){
            m=out[i].size();
            k=1;
            //cout<<i<<" - ";
            for(j=0;j<m-1;j++){
                //cout<<i<<","<<j<<","<<j+1<<"  ";
                out[i+1][k]=out[i][j]+out[i][j+1];
                k++;
            }
            //cout<<endl;
        }
        return out;
    }
};