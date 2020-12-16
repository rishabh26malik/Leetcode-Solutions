class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l, w, sq=sqrt(area);
        vector <int> out(2);
        for(l=1; l<=sq; l++){
            if(area % l == 0){
                out[1]=l;
                out[0]=area/l;
            }
        }
        return out;
    }
};