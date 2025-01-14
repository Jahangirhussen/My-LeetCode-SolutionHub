class Solution {
    public int alternateDigitSum(int n) {
        int ans = 0;
        int sign = 1;
        String numStr = Integer.toString(n);

        for (char c : numStr.toCharArray()) {
            int x = c - '0';
            ans += sign * x;
            sign *= -1;
        }

        return ans;
    }
}

