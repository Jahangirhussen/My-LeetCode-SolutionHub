#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.empty())
        {
            return "";
        }

        string ans = "";

        for (int i = 0; i < strs[0].size(); i++)
        {
            char current_char = strs[0][i];

            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].size() || strs[j][i] != current_char)
                {
                    return ans;
                }
            }

            ans += current_char;
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << solution.longestCommonPrefix(strs) << endl;

    vector<string> strs2 = {"dog", "dracecar", "dcar"};
    cout << "Longest Common Prefix: " << solution.longestCommonPrefix(strs2) << endl;

    return 0;
}
