class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {

        int maxCount = 0;
        int countOne = 0;

        for(int i = 0; i < nums.length; i++) {

            if(nums[i] == 1) {
                countOne++;
                maxCount = Math.max(maxCount, countOne);
            }
            else {
                countOne = 0;
            }
        }

        return maxCount;
    }
}