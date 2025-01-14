import math

class Solution:
    def isGoodArray(self, nums):
        g = nums[0]
        for i in range(1, len(nums)):
            g = math.gcd(g, nums[i])
            if g == 1:
                return True
        return g == 1  # g==1 hole true jabe na hole flase jabe

