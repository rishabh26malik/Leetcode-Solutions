class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i,j,k=n+m-1;
        i=m-1;
        j=n-1;
        while(i>=0 && j>=0){
            if(a[i] > b[j]){
                a[k]=a[i];
                i--;
                k--;
            }
            else{
                a[k]=b[j];
                j--;
                k--;
            }
        }
        while(j>=0){
            a[k]=b[j];
            j--;
            k--;
        }
    }
};