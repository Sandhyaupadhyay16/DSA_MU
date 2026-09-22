class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr=1,sum=0,diff=0;
        while(n>0)
        {
            int m=n%10;
            pr*=m;
            sum+=m;
            n=n/10;
        }
        diff=pr-sum;
        return diff;
    }
};