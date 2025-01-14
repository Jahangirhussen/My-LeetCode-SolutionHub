#include <iostream>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            carry = sum / 2;
            ans = (char)(sum % 2 + '0') + ans;
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    string a = "11", b = "1";
    cout << "Sum of " << a << " and " << b << " is: " << solution.addBinary(a, b) << endl;

    a = "1010", b = "1011";
    cout << "Sum of " << a << " and " << b << " is: " << solution.addBinary(a, b) << endl;

    return 0;
}
