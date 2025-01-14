#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int page_number = 0;
        for (char latter : columnTitle)
        {
            page_number = page_number * 26 + (latter - 'A' + 1);
        }
        return page_number;
    }
};

int main()
{
    Solution ob;
    string columnTitle = "AAABA";
    cout << "Column number: " << ob.titleToNumber(columnTitle) << endl;
    return 0;
}
