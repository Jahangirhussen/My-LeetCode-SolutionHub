#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int digitSum(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums)
    {
        int elementSum = 0;
        int digitSumTotal = 0;

        for (int num : nums)
        {
            elementSum += num;
            digitSumTotal += digitSum(num);
        }

        return abs(elementSum - digitSumTotal);
    }
};

int main()
{
    Solution ob1;
    int n, num;
    vector<int> nums;

    // Input number of elements in nums
    cin >> n;
    // Input the elements into the nums array
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }

    // Output the difference of sums
    cout << ob1.differenceOfSums(nums) << endl;

    return 0;
}
