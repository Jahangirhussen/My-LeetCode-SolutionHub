#include <iostream>
#include <bitset>
#include <string>
using namespace std;

class Solution
{
public:
    int countPalindromicSubsequence(string str)
    {
        bitset<26> foundChars;
        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            int left = str.find('a' + i);
            if (left != string::npos)
            {
                int right = str.find_last_of('a' + i);
                if (right - left < 2) continue;

                for (int mid = left + 1; mid < right; mid++)
                {
                    foundChars.set(str[mid] - 'a');
                    if (foundChars.count() == 26) break;
                }

                ans= ans + foundChars.count();
                foundChars.reset();
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    cout << solution.countPalindromicSubsequence("aabca") << endl;
    cout << solution.countPalindromicSubsequence("adc") << endl;
    cout << solution.countPalindromicSubsequence("bbcbaba") << endl;
    cout << solution.countPalindromicSubsequence("ckafnafqo") << endl;

    return 0;
}




/*


class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        unordered_map<char, pair<int, int>> mp;
        unordered_set<string> uniquePalindromes;

        for (int i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) == mp.end())
            {
                mp[s[i]].first = i;
            }
            mp[s[i]].second = i;
        }

        for (auto [c, pos] : mp)
        {
            int first = pos.first;
            int last = pos.second;

            if (first < last)   // যদি কমপক্ষে ২ বার আসে
            {
                unordered_set<char> middleChars; // মধ্যবর্তী অক্ষর রাখার জন্য
                for (int i = first + 1; i < last; ++i)
                {
                    middleChars.insert(s[i]);
                }

                // প্রতিটি পালিনড্রোম তৈরি করা
                for (char mc : middleChars)
                {
                    string palindrome = {c, mc, c};
                    uniquePalindromes.insert(palindrome);
                }
            }
        }

        return uniquePalindromes.size(); // ইউনিক পালিনড্রোমের সংখ্যা রিটার্ন
    }
};
*/
