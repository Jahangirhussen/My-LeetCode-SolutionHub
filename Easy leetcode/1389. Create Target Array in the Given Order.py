class Solution:
    def createTargetArray(self, nums, index):
        target = []

        for i in range(len(nums)):
            target.insert(index[i], nums[i])

        return target

