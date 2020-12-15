class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j,m,n,k;
        vector <int> out{1,1}, next{1,1,1};
        if(rowIndex==0)
        {
            return {1};
        }
        if(rowIndex==1)
        {
            return out;
        }
        if(rowIndex >= 2){
            n=rowIndex;
            for(i=1;i<n;i++){
                m=out.size();
                k=1;
                //cout<<i<<" - ";
                for(j=0;j<m-1;j++){
                    //cout<<i<<","<<j<<","<<j+1<<"  ";
                    next[k]=out[j]+out[j+1];
                    k++;
                }
                out=next;
                next.push_back(1);
                //cout<<endl;
            }
        }
        next.pop_back();
        return next;
    }
};