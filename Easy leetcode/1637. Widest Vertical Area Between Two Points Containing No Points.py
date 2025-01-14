class Solution:
    def maxWidthOfVerticalArea(self, points):
        x_axis = [point[0] for point in points]

        x_axis.sort()

        width = 0
        for i in range(1, len(x_axis)):
            width = max(width, x_axis[i] - x_axis[i - 1])

        return width

