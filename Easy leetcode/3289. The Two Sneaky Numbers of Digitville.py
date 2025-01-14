from collections import defaultdict

class Solution:
    def getSneakyNumbers(self, nums):
        mp = defaultdict(int)
        for x in nums:
            mp[x] += 1

        s = []
        for x, count in mp.items():
            if count > 1:
                s.append(x)

        s.sort()
        return s

