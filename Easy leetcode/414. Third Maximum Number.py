from typing import List

class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        s = set(nums)
        ans = sorted(s, reverse=True)
        if len(ans) >= 3:
            return ans[2]
        else:
            return ans[0]

