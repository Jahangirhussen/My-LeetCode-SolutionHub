class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        maxCandies = max(candies)
        result = []
        for candy in candies:
            result.append(candy + extraCandies >= maxCandies)
        return result

