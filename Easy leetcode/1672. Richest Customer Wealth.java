class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxSum = 0;
        for (int[] account : accounts) {
            int sum = 0;
            for (int value : account) {
                sum += value;
            }
            maxSum = Math.max(maxSum, sum);
        }
        return maxSum;
    }
}
