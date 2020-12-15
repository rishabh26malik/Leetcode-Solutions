class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size(), i, j, count=0;
        vector <int> row(n,0), col(m,0);
        cout<<n<<" "<<m<<endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(row[i]==1 && col[j]==1)
                        count++;
                }
            }
        }
        return count;
    }
};