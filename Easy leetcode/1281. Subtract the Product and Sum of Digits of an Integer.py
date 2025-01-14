class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum = 0
        mul = 1
        while n > 0:
            sum += n % 10
            mul *= n % 10
            n //= 10
        return mul - sum

