#include <iostream>
using namespace std;

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return        -1 if num is higher than the picked number
 *                1 if num is lower than the picked number
 *                otherwise return 0
 * int guess(int num);
 */
class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n;

        while (left <= right)
        {
            int mid = left + (right - left) / 2; // to prevent overflow
            int result = guess(mid);  // calling the guess API

            if (result == 0)
            {
                return mid;  // Found the correct number
            }
            else if (result == -1)
            {
                right = mid - 1;  // target is smaller, adjust the right boundary
            }
            else
            {
                left = mid + 1;  // target is larger, adjust the left boundary
            }
        }
        return -1;  // This will never be reached if the input is valid
    }
};


int main()
{
    Solution solution;
    int n = 10;  // এখানে ধরুন 10 পর্যন্ত সংখ্যা হতে পারে
    int result = solution.guessNumber(n);
    cout << "The picked number is: " << result << endl;  // সঠিক সংখ্যা প্রিন্ট হবে
    return 0;
}

