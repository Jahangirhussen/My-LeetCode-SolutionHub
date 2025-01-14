#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int minSteps(string s, string t)
    {
        vector<int> mp(26, 0);

        for (char x : s)
        {
            mp[x - 'a']++;
        }

        for (char x : t)
        {
            mp[x - 'a']--;
        }

        int steps = 0;
        for (int i = 0; i < 26; i++)
        {
            if (mp[i] > 0)
            {
                steps = steps + mp[i];
            }
        }

        return steps;
    }
};

int main()
{
    Solution solution;

    string s = "bab", t = "aba";
    cout << "Minimum steps to make t an anagram of s: " << solution.minSteps(s, t) << endl;

    s=  "leetcode", t = "practice";
    cout << "Minimum steps to make t an anagram of s: " << solution.minSteps(s, t) << endl;


    return 0;
}

