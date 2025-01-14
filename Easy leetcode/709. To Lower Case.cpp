#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (char & c : s)
        {
            c = tolower(c);
        }
        return s;
    }
};


int main()
{
    Solution ob1;
    string s;
    cin >> s;

    cout << ob1.toLowerCase(s) << endl;
    return 0;
}
