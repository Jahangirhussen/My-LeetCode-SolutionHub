class Solution:
    def missingNumber(self, nums):
        nums.sort()
        for i in range(len(nums)):
            if nums[i] != i:
                return i
        return len(nums)
"""
another good way
class Solution:
    def missingNumber(self, nums):
        n = len(nums)
        total = n * (n + 1) // 2
        sum = 0
        for num in nums:
            sum += num
        return total - sum
"""
