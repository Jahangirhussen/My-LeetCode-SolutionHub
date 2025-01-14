#include <iostream>
#include <string>
using namespace std;


class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        string word = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                word = word + s[i];
            }
            else if (word != "")
                {
                    ans = ' ' + word + ans;
                    word = "";
                }

        }
        if (word != "")
        {
            ans = ' ' + word + ans;
        }

        return ans.substr(1);
    }
};


int main()
{
    Solution sol;
    string input = "the sky is blue";
    cout << "Reversed words: " << sol.reverseWords(input) << endl;  // আউটপুট হবে উল্টানো শব্দগুলো
    return 0;
}
