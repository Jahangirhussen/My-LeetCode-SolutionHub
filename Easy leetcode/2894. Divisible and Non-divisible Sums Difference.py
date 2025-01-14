class Solution:
    def differenceOfSums(self, n, m):
        totalSum = n * (n + 1) // 2
        k = n // m
        sumMultiplesOfM = m * k * (k + 1) // 2
        sumNotMultiplesOfM = totalSum - sumMultiplesOfM
        return sumNotMultiplesOfM - sumMultiplesOfM


