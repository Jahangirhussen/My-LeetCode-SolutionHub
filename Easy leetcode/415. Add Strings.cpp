#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string ans;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = d1 + d2 + carry;
            ans.push_back((sum % 10) + '0');
            carry = sum / 10;

            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution solution;

    // Test cases
    string num1 = "11", num2 = "123";
    cout << "Input: num1 = " << num1 << ", num2 = " << num2
         << " -> Output: " << solution.addStrings(num1, num2) << endl;

    num1 = "456", num2 = "77";
    cout << "Input: num1 = " << num1 << ", num2 = " << num2
         << " -> Output: " << solution.addStrings(num1, num2) << endl;

    num1 = "0", num2 = "0";
    cout << "Input: num1 = " << num1 << ", num2 = " << num2
         << " -> Output: " << solution.addStrings(num1, num2) << endl;

    return 0;
}

/*
            456
             77
-------------------------
 step 1       3 carry 1
 step 2      3 carry 1
 step 2     5 carry 0
*/
/*
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string ans;
        ans.reserve(max(num1.size(), num2.size()) + 1);
        int c = 0;
        int i = num1.size() - 1, j = num2.size() - 1;

        while (i >= 0 || j >= 0 || c > 0)
        {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = d1 + d2 + c;
            c = sum / 10;
            ans.append(1, (char)((sum % 10) + '0'));
            i--;
            j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
*/
