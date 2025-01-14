
class Solution:
    def minOperations(self, nums, k):
        ans = 0
        for num in nums:
            if num < k:
                ans += 1
        return ans
