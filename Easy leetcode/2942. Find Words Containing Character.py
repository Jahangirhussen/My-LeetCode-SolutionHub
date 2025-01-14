class Solution:
    def findWordsContaining(self, words, x):
        ans = []
        for i, word in enumerate(words):
            if x in word:
                ans.append(i)
        return ans

