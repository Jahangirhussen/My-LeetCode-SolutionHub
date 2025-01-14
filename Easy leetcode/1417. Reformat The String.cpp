#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution
{
public:
    string reformat(string s)
    {
        string D = "", L = "";
        for (char c : s)
        {
            if (isdigit(c))
            {
                D += c;
            }
            else
            {
                L += c;
            }
        }

        int D_count = D.size(), L_count = L.size();
        if (abs(D_count - L_count) > 1) return "";

        string ans = "";
        for (int i = 0; i < min(D_count, L_count); ++i)
        {
            if (D_count > L_count)
            {
                ans = ans + D[i] + L[i];
            }
            else
            {
                ans = ans + L[i] + D[i];
            }
        }
        if (D_count > L_count) ans = ans + D[D_count - 1];
        if (D_count < L_count) ans = ans + L[L_count - 1];

        return ans = ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.reformat("a0b1c2") << endl;
    cout << sol.reformat("ab123") << endl;
    cout << sol.reformat("1229857369") << endl;
    cout << sol.reformat("covid2019") << endl;
    cout << sol.reformat("a1b2c3") << endl;

    return 0;
}
