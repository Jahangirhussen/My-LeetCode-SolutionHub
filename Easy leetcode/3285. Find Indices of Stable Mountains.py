class Solution:
    def stableMountains(self, height, threshold):
        result = []
        for i in range(1, len(height)):
            if height[i - 1] > threshold:
                result.append(i)
        return result
