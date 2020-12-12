class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int j, i, n=mat.size(), sum=0;
        for(i=0;i<n;i++)
            sum+=mat[i][i];
        j=0;
        for(i=n-1;i>=0;i--){
            sum+=mat[i][j];
            j++;
        }
        if(n&1 == 1)
            sum-=mat[n/2][n/2];
        return sum;
    }
};