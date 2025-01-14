#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string stringHash(string s, int k)
    {
        string ans = "";
        for (int i = 0; i < s.length(); i += k)
        {
            int sum = 0;
            for (int j = 0; j < k ; j++)/// (eta na dileo hoy j < k && i + j < s.size())______-i + j < s.size()); i=2 3=3 hole 2+3=5 jodi string size er cheye beshi hoy ok but egula beshi hole loop break
            {
                sum = sum + s[i + j] - 'a';
            }
            ans = ans + (char)(sum % 26 + 'a');
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    cout << solution.stringHash("abcd", 2) << endl;
    cout << solution.stringHash("mxz", 3) << endl;
    return 0;
}
