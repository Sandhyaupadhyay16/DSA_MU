class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int countDigits=0;
            while(nums[i]>0)
            {
                int m=nums[i]%10;
                countDigits++;
                nums[i]=nums[i]/10;
            }
            if(countDigits%2==0)
            count++;

        }
        return count;
    }
};