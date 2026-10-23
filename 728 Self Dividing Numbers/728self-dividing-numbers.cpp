class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++)
        {
            bool valid=true;
            int num=i;
            while(num>0)
            {
                int m=num%10;
                if(m==0 || i%m!=0)
                {
                    valid=false;
                    break;
                }
                num=num/10;
            }
            if(valid)
            result.push_back(i);
        }
        return result;
    }
};