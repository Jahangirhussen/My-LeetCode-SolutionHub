#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        if (s.size() != goal.size())
        {
            return false;
        }

        // If the strings are equal, check for duplicates
        if (s == goal)
        {
            for (int i = 0; i < s.size(); i++)
            {
                for (int j = i + 1; j < s.size(); j++)
                {
                    if (s[i] == s[j])
                        return true; // Duplicates found, return true
                }
            }
            return false;
        }

        string sorted_s = s;
        string sorted_goal = goal;
        sort(sorted_s.begin(), sorted_s.end());
        sort(sorted_goal.begin(), sorted_goal.end());

        if (sorted_s == sorted_goal)
        {
            int count = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != goal[i])
                    count++;
            }
            return count == 2;
        }

        return false;
    }
};

int main()
{
    Solution ob1;
    string s = "ab", goal = "ab";

    cout << ob1.buddyStrings(s, goal) << endl; // Output: 1 (true)

    return 0;
}
