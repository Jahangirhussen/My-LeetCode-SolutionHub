from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return []

# Example usage
# sol = Solution()
# result = sol.twoSum([2, 7, 11, 15], 9)  # Output: [0, 1]
# result = sol.twoSum([3, 2, 4], 6)       # Output: [1, 2]
# result = sol.twoSum([3, 3], 6)          # Output: [0, 1]

