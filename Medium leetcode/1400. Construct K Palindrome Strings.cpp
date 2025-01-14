#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        if (s.length() < k)
        {
            return false;
        }

        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int oddCount = 0;
        for (auto it : freq)
        {
            if (it.second % 2 != 0)
            {
                oddCount++;
            }
        }

        return oddCount <= k;
    }
};

int main()
{
    Solution sol;
    cout << sol.canConstruct("annabelle", 2) << endl;
    cout << sol.canConstruct("leetcode", 3) << endl;
    cout << sol.canConstruct("true", 4) << endl;
    return 0;
}
