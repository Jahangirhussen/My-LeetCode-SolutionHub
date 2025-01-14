#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int i=0,sign=1;
        long long result=0;
        while(i<s.size() && isspace(s[i]))
        {
            i++;
        }


        if(i<s.size() && s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(i<s.size() && s[i]=='+')
        {
            sign=1;
            i++;
        }

        while(i<s.size() && isdigit(s[i]))
        {
            result = (result * 10  ) + (s[i]-'0');
            i++;



            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;
        }

        return result *sign;

    }
};

int main()
{
    Solution solution;

    string s1 = "42";
    cout << solution.myAtoi(s1) << endl;  // আউটপুট হবে 42

    string s2 = "   -4772";
    cout << solution.myAtoi(s2) << endl;  // আউটপুট হবে -42

    string s3 = "4193 with words";
    cout << solution.myAtoi(s3) << endl;  // আউটপুট হবে 4193

    string s4 = "words and 987";
    cout << solution.myAtoi(s4) << endl;  // আউটপুট হবে 0

    return 0;
}

