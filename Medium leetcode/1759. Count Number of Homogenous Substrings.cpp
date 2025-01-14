#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Solution
{
public:
    int countHomogenous(string s)
    {
        const int MOD = 1e9 + 7;
        int n = s.length();
        long long max_count = 0;
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
            }
            else
            {
                max_count += (long long)count * (count + 1) / 2;
                max_count %= MOD;
                count = 1;
            }
        }

        max_count += (long long)count * (count + 1) / 2;
        max_count %= MOD;

        return max_count;
    }
};


int main()
{
    Solution solution;

    string s1 = "abbcccaa";
    cout << solution.countHomogenous(s1) << endl;

    string s2 = "xy";
    cout << solution.countHomogenous(s2) << endl;

    string s3 = "zzzzz";
    cout << solution.countHomogenous(s3) << endl;

    return 0;
}

