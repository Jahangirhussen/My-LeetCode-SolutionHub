class Solution {

    public int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    public int countBalls(int lowLimit, int highLimit) {
        int[] box = new int[100];
        int maxBallsInAnyBox = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int sum = sumOfDigits(i);
            box[sum]++;
            maxBallsInAnyBox = Math.max(maxBallsInAnyBox, box[sum]);
        }

        return maxBallsInAnyBox;
    }
}

