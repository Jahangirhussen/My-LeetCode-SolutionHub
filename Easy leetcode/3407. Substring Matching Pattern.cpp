#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool hasMatch(string text, string pattern)
    {
        int index_star = -1;
        for (int i = 0; i < pattern.size(); i++)
        {
            if (pattern[i] == '*')
            {
                index_star = i;
                break;
            }
        }
        if (index_star == -1) return text == pattern;

        string pre  = pattern.substr(0, index_star);
        string suff  = pattern.substr(index_star + 1);

        int pre_index = text.find(pre );
        if (pre_index == -1) return false;

        int suff_index = text.find(suff , pre_index + pre .size());
        if (suff_index == -1) return false;

        return ( pre_index + pre .size() ) <= suff_index;
    }
};




int main()
{
    Solution solution;

    string s = "leetcode";
    string p = "ee*e";

    if (solution.hasMatch(s, p))
    {
        cout << "Pattern matches!" << endl;
    }
    else
    {
        cout << "Pattern does not match!" << endl;
    }

    return 0;
}

/*
class Solution
{
public:
    bool hasMatch(string text, string pattern)
    {
        int starIndex = pattern.find('*');
        if (starIndex == -1) return text == pattern;

        string prefix = pattern.substr(0, starIndex);
        string suffix = pattern.substr(starIndex + 1);

        int prefixIndex = text.find(prefix);
        if (prefixIndex == -1) return false;

        int suffixIndex = text.rfind(suffix);
        if (suffixIndex == -1) return false;

        return prefixIndex + prefix.length() <= suffixIndex;
    }
};
*/
