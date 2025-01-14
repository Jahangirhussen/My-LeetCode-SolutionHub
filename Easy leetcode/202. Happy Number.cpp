#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:


    bool isHappy(int n)
    {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end())
        {
            seen.insert(n);
            n = getSumOfSquares(n);
        }
        return n == 1;
    }
    int getSumOfSquares(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum = sum +( digit * digit);
            n /= 10;
        }
        return sum;
    }
};

int main()
{
    Solution solution;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (solution.isHappy(n))
    {
        cout << n << " is a happy number." << endl;
    }
    else
    {
        cout << n << " is not a happy number." << endl;
    }

    return 0;
}
