class Solution {
public:
    int countPrimes(int n) {
        bool prime[n+1];
        memset(prime, true, sizeof(prime));
        int i,p,count=n-2;
        for(p=2;p*p<=n;p++){
            if(prime[p]){
                for(i=p*p;i<=n;i+=p){
                    prime[i]=false;
                    //count--;
                }
            }
        }
        count=0;
        for(i=2;i<n;i++)
            if(prime[i]==true)
                count++;    
        return count;   
    }
};