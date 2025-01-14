class Solution:
    def minPartitions(self, n: str) -> int:
        big_digit = 0
        for c in n:
            big_digit = max(big_digit, int(c))
            if big_digit == 9:
                break
        return big_digit

