class Solution:
    def stringHash(self, s: str, k: int) -> str:
        ans = ""
        for i in range(0, len(s), k):
            sum = 0
            for j in range(k):
                if i + j < len(s):
                    sum += ord(s[i + j]) - ord('a')
            ans += chr((sum % 26) + ord('a'))
        return ans

