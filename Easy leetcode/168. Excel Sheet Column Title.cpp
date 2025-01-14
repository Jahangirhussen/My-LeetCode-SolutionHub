class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans = "";
        while (columnNumber > 0)
        {
            columnNumber--;
            ans = char(columnNumber % 26 + 'A') + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};

