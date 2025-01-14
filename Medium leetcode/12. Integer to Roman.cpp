#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        string roman = "";

        pair<int, string> romanSymbols[] =
        {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        for (const auto &x : romanSymbols)
        {
            while (num >= x.first)
            {
                roman = roman + x.second;
                num = num- x.first;
            }
        }

        return roman;
    }
};

int main()
{
    Solution solution;

    int n = 3749; // Example input
    cout << "Roman numeral for " << n << " is: " << solution.intToRoman(n) << endl;

    n = 58; // Another example
    cout << "Roman numeral for " << n << " is: " << solution.intToRoman(n) << endl;

    n = 1994; // Another example
    cout << "Roman numeral for " << n << " is: " << solution.intToRoman(n) << endl;

    return 0;
}
