import java.util.HashSet;

class Solution
{
    public int numJewelsInStones(String jewels, String stones)
    {
        // HashSet ব্যবহার করে jewels-এর অক্ষর সংরক্ষণ
        HashSet<Character> jewSet = new HashSet<>();
        for (char c : jewels.toCharArray())
        {
            jewSet.add(c);
        }

        int count = 0;
        for (char x : stones.toCharArray())
        {
            if (jewSet.contains(x))
            {
                count++;
            }
        }

        return count;
    }
}

/*
if (jewSet.contains(x))
চেক করা হচ্ছে, বর্তমান অক্ষর (x) jewSet-এ আছে কিনা।
jewSet.contains(x)
যদি x সেটে থাকে, এটি true রিটার্ন করবে।
*/

