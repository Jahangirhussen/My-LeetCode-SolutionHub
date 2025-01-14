#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int left = 0, right = numbers.size() - 1;

        while (left < right)
        {
            int sum = numbers[left] + numbers[right];
            if (sum == target)
            {
                return {left + 1, right + 1};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
    }
};

int main()
{
    Solution solution;

    vector<int> numbers1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(numbers1, target1);
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;

    vector<int> numbers2 = {2, 3, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(numbers2, target2);
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;

    vector<int> numbers3 = {-1, 0};
    int target3 = -1;
    vector<int> result3 = solution.twoSum(numbers3, target3);
    cout << "Output: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}

