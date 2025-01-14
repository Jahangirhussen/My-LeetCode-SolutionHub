class Solution:
    def digitSum(self, num: int) -> int:
        sum = 0
        while num > 0:
            sum += num % 10
            num //= 10
        return sum

    def differenceOfSum(self, nums: list[int]) -> int:
        element_sum = 0
        digit_sum_total = 0

        for num in nums:
            element_sum += num
            digit_sum_total += self.digitSum(num)

        return abs(element_sum - digit_sum_total)

