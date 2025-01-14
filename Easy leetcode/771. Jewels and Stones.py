
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        jew_set = set(jewels)

        count = 0
        for x in stones:
            if x in jew_set:
                count += 1

        return count



# if (jewSet.contains(x))
# চেক করা হচ্ছে, বর্তমান অক্ষর (x) jewSet-এ আছে কিনা।
# jewSet.contains(x)
# যদি x সেটে থাকে, এটি true রিটার্ন করবে।
