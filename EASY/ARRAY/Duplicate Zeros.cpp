class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(), m, i;
        for(i=0;i<n;i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i++;
            }
        }
        m=arr.size();
        n=m-n;
        i=m-1;
        while(n--){
            arr.erase(arr.begin()+i);
            i--;
        }
    }
};