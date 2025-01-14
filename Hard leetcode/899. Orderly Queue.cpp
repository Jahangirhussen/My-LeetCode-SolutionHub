#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string orderlyQueue(string s, int k)
    {
        int n=s.size();
        if (k == 0 || s.empty()) return s;

        if (k != 1)
        {
            sort(s.begin(), s.end());
            return s;
        }
        else
        {
            s = s + s;
            string result = s.substr(0,n);

            for (int i = 1; i <n; i++)
            {
                result = min(result, s.substr(i,n));
            }

            return result;
        }
    }
};


int main()
{
    Solution ob1;
    string s1 = "cba";
    int k1 = 1;
    cout << "Result for s = 'cba' and k = 1: " << ob1.orderlyQueue(s1, k1) << endl;

    string s2 = "baaca";
    int k2 = 3;
    cout << "Result for s = 'baaca' and k = 3: " << ob1.orderlyQueue(s2, k2) << endl;

    return 0;
}

