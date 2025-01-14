class Solution
{
    public boolean isValidWord(String word)
    {
        int hyphenCount = 0;
        int punctuationCount = 0;
        int n = word.length();

        for (int i = 0; i < n; i++)
        {
            char x = word.charAt(i);

            if (x == '-')
            {
                hyphenCount++;
                if (i == 0 || i == n - 1 || !Character.isLowerCase(word.charAt(i - 1)) || !Character.isLowerCase(word.charAt(i + 1)))
                {
                    return false;
                }
            }
            else if (x == '!' || x == '.' || x == ',')
            {
                punctuationCount++;
                if (punctuationCount > 1 || (i != n - 1 && punctuationCount == 1))
                {
                    return false;
                }
            }
            else if (Character.isDigit(x))
            {
                return false;
            }
            else if (!Character.isLowerCase(x) && x != '-' && x != '!' && x != '.' && x != ',')
            {
                return false;
            }
        }

        return hyphenCount <= 1 && punctuationCount <= 1;
    }

    public int countValidWords(String sentence)
    {
        String[] tokens = sentence.split("\\s+");
        int count = 0;

        for (String token : tokens)
        {
            if (isValidWord(token))
            {
                count++;
            }
        }

        return count;
    }
}

