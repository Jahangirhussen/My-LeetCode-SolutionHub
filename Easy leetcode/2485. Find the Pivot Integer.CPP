#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int pivotInteger(int n)
    {
        int totalSum = (n * (n + 1)) / 2;
        int sum_fifo = 0;

        for (int i = 1; i <= n; i++)
        {
            sum_fifo  =sum_fifo + i;
            int sum_lifo = totalSum - sum_fifo + i;
            if (sum_fifo == sum_lifo)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution ob1;
    int n;
    cin >> n;
    cout << ob1.pivotInteger(n) << endl;

    return 0;
}
