class Solution
{
public:
    int mostWordsFound(vector<string>& sentences)
    {
        int m = 0;
        for (const string & s : sentences)
        {
            int c = 1;
            for (char ch : s)
            {
                if (ch == ' ') c++;
            }
            m = max(m, c);
        }
        return m;
    }
};
