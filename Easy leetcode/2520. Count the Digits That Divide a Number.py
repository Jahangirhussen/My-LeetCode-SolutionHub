class Solution:
    def countDigits(self, num: int) -> int:
        temp = num
        count = 0
        while temp > 0:
            digit = temp % 10
            if digit != 0 and num % digit == 0:
                count += 1
            temp //= 10
        return count

