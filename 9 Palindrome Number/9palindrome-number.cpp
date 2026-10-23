class Solution {
public:
    bool isPalindrome(int x) {
        int m;
        long long reverse=0; 
        int temp=x;
        while(x>0)
        {
           m=x%10;
           reverse=reverse*10+m;
           x=x/10;
        }
        if(temp==reverse)
        return true;
        else 
        return false;
        
    }
};