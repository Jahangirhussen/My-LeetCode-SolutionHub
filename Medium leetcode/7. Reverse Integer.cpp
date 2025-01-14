#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;

        while (x != 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        if (rev < INT_MIN || rev > INT_MAX)
            return 0;

        return (x < 0) ? -rev : rev;
    }
};

int main()
{
    Solution ob1;
    cout << ob1.reverse(-1230) << endl;
}
