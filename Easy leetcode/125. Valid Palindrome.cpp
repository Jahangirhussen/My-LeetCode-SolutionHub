#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string p = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isdigit(s[i]))
            {
                p = p + tolower( s[i] );
            }
        }
        int i = 0, j = p.size() - 1;
        while (i < j)
        {
            if (p[i] != p[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main()
{
    Solution ob1;
    string s = "A man, a plan, a canal: Panama";
    cout << (ob1.isPalindrome(s) ? "true" : "false") << endl;

    s = "race a car";
    cout << (ob1.isPalindrome(s) ? "true" : "false") << endl;

    s = " ";
    cout << (ob1.isPalindrome(s) ? "true" : "false") << endl;

    return 0;
}
