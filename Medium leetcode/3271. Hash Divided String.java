class Solution
{
    public String stringHash(String s, int k)
    {
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < s.length(); i += k)
        {
            int sum = 0;
            for (int j = 0; j < k && i + j < s.length(); j++)
            {
                sum += s.charAt(i + j) - 'a';
            }
            ans.append((char)(sum % 26 + 'a'));
        }
        return ans.toString();
    }
}

