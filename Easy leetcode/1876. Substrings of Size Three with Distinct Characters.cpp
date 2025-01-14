#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        int n = s.size(), c3 = 0;
        for (int i = 0; i < n - 2; i++)
        {
            char a = s[i], b = s[i + 1], c = s[i + 2];
            bool is_true = (a != b && a != c && b != c);
            if (is_true)
            {
                c3++;
            }
        }
        return c3;
    }
};

int main()
{
    Solution ob1;

    // Test case 1
    cout << ob1.countGoodSubstrings("xyzzaz") << endl;  // Output: 1
    // Test case 2
    cout << ob1.countGoodSubstrings("aababcabc") << endl;  // Output: 4

    return 0;
}
