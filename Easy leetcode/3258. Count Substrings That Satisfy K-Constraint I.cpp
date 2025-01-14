#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int countKConstraintSubstrings(string s, int k)
    {
        int n = s.size(), count = 0;


        for (int i = 0; i < n; i++)
        {
            int zero = 0, one = 0;

            for (int j = i; j < n; j++)
            {
                char x = s[j];
                if (x == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }

                if (zero <= k || one <= k)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    string s0 = "10101";
    int k0 = 1;
    int result0 = sol.countKConstraintSubstrings(s0, k0);
    cout << "Number of substrings satisfying k0-constraint: " << result0 << endl;

    string s1 = "1010101";
    int k1 = 2;
    int result1 = sol.countKConstraintSubstrings(s1, k1);
    cout << "Number of substrings satisfying k1-constraint: " << result1 << endl;

    string s2 = "11111";
    int k2 = 1;
    int result2 = sol.countKConstraintSubstrings(s2, k2);
    cout << "Number of substrings satisfying k2-constraint: " << result2 << endl;

    return 0;
}
