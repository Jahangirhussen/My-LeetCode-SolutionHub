#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int minimumLength(string s)
    {
        map<char, int> mp;

        for (char x : s)
        {
            mp[x]++;
        }

        int ans = 0;

        for (auto& [x, count] : mp)
        {
            if (count % 2) /// If there are 3 characters, select 1 and match 2 from both sides
            {
                ans = ans + 1;
            }
            else /// If there are 4 characters, two can match from both sides, but only 2 remain
            {
                ans = ans + 2;
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    string s = "abaacbcbb";
    cout << "Minimum length of the final string: " << solution.minimumLength(s) << endl;

    s = "aa";
    cout << "Minimum length of the final string: " << solution.minimumLength(s) << endl;

    return 0;
}
