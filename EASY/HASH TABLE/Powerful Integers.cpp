class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector <int> out;
        set <int> S;
        int i,j;
        for(i=1;i<bound;i*=x){
            for(j=1;i+j<=bound;j*=y){
                
                    if(S.find(i+j)==S.end()){
                        S.insert(i+j);
                        out.push_back(i+j);
                    }
                if(y==1)
                    break;
            }
            if(x==1)
                break;
        }
        return out;
    }
};