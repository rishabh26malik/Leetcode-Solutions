class Solution {
public:
    long long int sieve(int n){
        long long int count=0;
        bool prime[n+1];
        memset(prime, true, sizeof(prime)); 
        for (int p=2; p*p<=n; p++) { 
            if (prime[p] == true) { 
                for (int i=p*p; i<=n; i += p){ 
                    prime[i] = false; 
                }
            } 
        }
        
        for(auto x : prime){
            //cout<<x<<" ";
            if(x==true)
                count++;
        }
        return count-2;
    }
    int numPrimeArrangements(int n) {
        long long int fact=1, count;
        count=sieve(n);
        n-=count;
        //cout<<count<<" "<<n<<endl;
        while(count>0){
            fact=(fact*count)%1000000007;
            count--;
        }
        while(n>0){
            fact=(fact*n)%1000000007;
            n--;
        }
        return fact;
    }
};