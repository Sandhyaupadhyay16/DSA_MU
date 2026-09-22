class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int m,sum=0;
        int temp=x;
        while(x>0)
        {
            m=x%10;
            sum+=m;
            x=x/10;
        }
        if(temp%sum!=0)
        {
        return -1;
        }
        else
        {
        return sum;
        }
    }
};