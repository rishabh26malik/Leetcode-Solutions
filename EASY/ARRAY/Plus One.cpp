class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, n=digits.size(), carry=0, sum;
        for(i=n-1;i>=0;i--){
            sum=(digits[i]+1)%10;
            carry=(digits[i]+1)/10;
            digits[i]=sum;
            if(!carry)
                break;
            
        }
        if(carry)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};