class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n<=1) return 0;
        int prime[n];
        for(int i=0;i<n;i++)
        {
          prime[i]=1;  
        }
        for(long long int i=2;i*i<n;i++)
        {
            if(prime[i]==1)
            {
                for(long long int j=i*i;j<n;j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i]==1)
            count++;
        }
        return count;
    }
};