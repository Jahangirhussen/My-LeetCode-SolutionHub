class Solution {
    public int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    public int differenceOfSum(int[] nums) {
        int elementSum = 0;
        int digitSumTotal = 0;

        for (int num : nums) {
            elementSum += num;
            digitSumTotal += digitSum(num);
        }

        return Math.abs(elementSum - digitSumTotal);
    }
}

