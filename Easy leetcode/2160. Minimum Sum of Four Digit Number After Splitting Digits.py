class Solution:
    def minimumSum(self, num: int) -> int:
        x = []
        for i in range(4):
            x.append(num % 10)
            num //= 10
        x.sort()
        return (x[0] * 10 + x[3]) + (x[1] * 10 + x[2])

