#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool canBeValid(string s, string locked)
    {
        if (s.length() % 2 != 0) return false;

        stack<int> open, zero;
        for (int i = 0; i < s.size(); i++)
        {
            if (locked[i] == '0')
            {
                zero.push(i);
            }
            else if (s[i] == '(')
            {
                open.push(i);
            }
            else
            {
                if (!open.empty())
                {
                    open.pop();
                }
                else if (!zero.empty())
                {
                    zero.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        while (!open.empty() && !zero.empty())
        {
            if (open.top() < zero.top())
            {
                open.pop();
                zero.pop();
            }
            else
            {
                return false;
            }
        }

        return open.empty();
    }
};

int main()
{
    Solution solution;
    cout << (solution.canBeValid("))()))", "010100") ? "True" : "False") << endl;
    return 0;
}



/**
class Solution
{
public:
    bool canBeValid(string s, string locked)
    {
        int n = s.length();

        if (n % 2 != 0)
        {
            return false;
        }

        int open = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (locked[i] == '0')
            {
                zero++;
            }
            else if (s[i] == '(')
            {
                open++;
            }
            else
            {
                if (open > 0)
                {
                    open--;
                }
                else if (zero > 0)
                {
                    zero--;
                }
                else
                {
                    return false;
                }
            }
        }

        int close = 0;
        zero = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (locked[i] == '0')
            {
                zero++;
            }
            else if (s[i] == ')')
            {
                close++;
            }
            else
            {
                if (close > 0)
                {
                    close--;
                }
                else if (zero > 0)
                {
                    zero--;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};

*/

/**
class Solution
{
public:
    bool canBeValid(string s, string locked)
    {
        if (s.length() % 2 != 0)
        {
            return false;
        }

        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]==s[i] &&  locked[i-1]=='1' && locked[i]=='1')
            {
                return false;
            }



        }


        return true;
    }
};


*/
