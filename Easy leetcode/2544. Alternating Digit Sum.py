class Solution:
    def alternateDigitSum(self, n: int) -> int:
        ans = 0
        sign = 1
        for c in str(n):
            x = int(c)
            ans += sign * x
            sign *= -1
        return ans

