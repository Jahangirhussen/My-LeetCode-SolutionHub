#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int dayOfYear(string date)
    {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            daysInMonth[1] = 29;
        }

        int total = 0;
        for (int i = 0; i < month - 1; ++i)
        {
            total = total  + daysInMonth[i];
        }

        total = total + day;

        return total;
    }
};

int main()
{
    Solution ob1;

    string date = "2019-12-10";
    cout << ob1.dayOfYear(date)<<endl;  // Output: 41

 string date2 = "2019-01-09";
cout<<ob1.dayOfYear(date2)<<endl; // Output: 9



    return 0;
}
