class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i,j,n=arr.size();
        for(i=0;i<n;i++)
            if(arr[i]==val)
                break;
        j=i;
        for(i=j+1;i<n;i++){
            if(arr[i]!=val)
            {
                arr[j]=arr[i];
                j++;
            }
        }
        return j;
    }
};