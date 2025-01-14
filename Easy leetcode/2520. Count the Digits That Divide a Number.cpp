#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int countDigits(int num)
    {
        int temp = num, count = 0;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 0 && num % digit == 0)
            {
                count++;
            }
            temp /= 10;
        }
        return count;
    }
};

int main()
{
    Solution ob1;
    string num;
    long long t;

    cin >> num >> t;

    cout << ob1.smallestNumber(num, t) << endl;

    return 0;
}

