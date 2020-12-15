class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0, n=bits.size();
        bool res;
        while(i<n){
            if(bits[i]==0){
                res=true;
                i++;
            }
            else{
                res=false;
                i+=2;
            }
        }
        return res;
    }
};