class Solution {
public:
    bool isHappy(int n) {
        long long int rem,sum=0;
        while(1){
            sum=0;
            while(n){
                rem=n%10;
                sum+=rem*rem;
                n=n/10;
            }
            if(sum>=1 && sum<=9){
                if(sum==1 || sum==7)
                    return true;
                else
                    return false;
            }
            n=sum;
        }
    }
};