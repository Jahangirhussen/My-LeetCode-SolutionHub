#include <iostream>
using namespace std;
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
      int sum = 0, temp = x;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (x % sum == 0)
    {
        return sum;
    }
    else
    {
        return -1;
    }
    }
};

int main()
{
    Solution ob1;

    cout << ob1.sumOfTheDigitsOfHarshadNumber(18) << endl;
    cout << ob1.sumOfTheDigitsOfHarshadNumber(23) << endl;
    return 0;
}

