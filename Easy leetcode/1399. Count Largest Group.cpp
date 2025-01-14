#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int countLargestGroup(int n)
    {
        vector<int> groupCount(37, 0);
        int maxGroupSize = 0;
        int largestGroups = 0;

        for (int i = 1; i <= n; ++i)
        {
            int digitSum = sumOfDigits(i);
            maxGroupSize = max(maxGroupSize, ++groupCount[digitSum]);

        }

        for (int size : groupCount)
        {
            if (size == maxGroupSize)
            {
                largestGroups++;
            }
        }

        return largestGroups;
    }

private:
    int sumOfDigits(int num)
    {
        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

int main()
{
    Solution Solution;
    int n;
    cin >> n;
    cout << Solution.countLargestGroup(n) << endl;
    return 0;
}


/*
Groups based on the sum of digits:

Sum = 1: [1, 10]
Sum = 2: [2, 11, 20]
Sum = 3: [3, 12, 21, 30]
Sum = 4: [4, 13, 22, 31, 40]
Sum = 5: [5, 14, 23, 32, 41, 50]
Sum = 6: [6, 15, 24, 33, 42]
Sum = 7: [7, 16, 25, 34, 43]
Sum = 8: [8, 17, 26, 35, 44]
Sum = 9: [9, 18, 27, 36, 45]
Sum = 10: [19, 28, 37, 46]
Sum = 11: [29, 38, 47]
Sum = 12: [39, 48]
Sum = 13: [49]
Step 3: Find the largest group size
The largest group size is 6 (Group with sum = 5: [5, 14, 23, 32, 41, 50]).

Step 4: Count how many groups have the largest size
Only 1 group (sum = 5) has 6 elements.

*/
