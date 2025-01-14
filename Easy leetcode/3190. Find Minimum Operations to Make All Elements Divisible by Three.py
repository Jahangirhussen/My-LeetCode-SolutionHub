class Solution:
    def minimumOperations(self, nums):
        count = 0
        for x in nums:
            if x % 3 != 0:
                count += min(x % 3, 3 - (x % 3))
        return count
