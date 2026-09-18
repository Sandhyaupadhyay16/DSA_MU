class Solution {
public:
    int reverse(int x) {
        
     long long m,reverse=0;
      while(x!=0)
      {
        m=x%10;
        reverse=reverse*10+m;
        if(reverse < INT_MIN || reverse > INT_MAX)
        {
        return 0;
        }
        x=x/10;
    }
    return reverse;
    }
};