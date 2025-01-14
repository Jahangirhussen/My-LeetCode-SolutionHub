class Solution {
    public int minimumOperations(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] % 3 != 0) {
                count += Math.min(nums[i] % 3, 3 - (nums[i] % 3));
            }
        }
        return count;
    }
}

