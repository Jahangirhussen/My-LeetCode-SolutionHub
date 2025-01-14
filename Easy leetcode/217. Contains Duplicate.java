import java.util.*;

class Solution
{
    public boolean containsDuplicate(int[] nums)
    {
        Set<Integer> s = new HashSet<>();
        for (int x : nums)
        {
            if (!s.add(x))    // add() যদি ডুপ্লিকেট পেলে false ফেরত দেয়
            {
                return true;   // ডুপ্লিকেট পাওয়া গেছে
            }
        }
        return false;  // কোনো ডুপ্লিকেট নেই
    }
}

