class Solution {
public:
    bool isHappy(int n) {
        int m;
        int temp=n;
        while(n!=1 && n!=4)
        {
            int sq=0;
            while(n>0)
            {
            m=n%10;
            sq+=m*m;
            n=n/10;
            }
            if(sq==1)
            return true;
            else
            n=sq;
        }
        return n==1;
    }
};