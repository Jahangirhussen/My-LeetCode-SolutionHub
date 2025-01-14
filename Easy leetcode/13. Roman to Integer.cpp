class Solution
{
public:
    int romanToInt(string s)
{
    unordered_map<char, int> a =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (i + 1 < s.size() && a[s[i]] < a[s[i + 1]])
        {
            sum= sum - a[s[i]];  // পরবর্তী মান বড় হলে বিয়োগ
        }
        else
        {
            sum = sum+ a[s[i]];  // অন্যথায় যোগ
        }
    }

    return sum;
}

};
