#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold)
    {
        int max_size = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 && nums[i] <= threshold)
            {
                int current_size = 1;
                while ( (i + current_size < nums.size()) && ( nums[i + current_size] % 2 != nums[i + current_size - 1] % 2 ) && (nums[i + current_size] <= threshold) )
                {
                    current_size++;
                }
                max_size = max(max_size, current_size);
                i += current_size - 1;  // Skip the checked subarray part
            }
        }

        return max_size;
    }
};

int main()
{
    Solution ob1;
    vector<int> nums = {3,2,5,4};  // Example input
    int threshold = 5;

    cout << "Longest alternating subarray length: " << ob1.longestAlternatingSubarray(nums, threshold) << endl;

    return 0;
}
/*
class Solution
{
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold)
    {
        int max_size = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 && nums[i] <= threshold)
            {
                int current_size = 1;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if ( ( nums[j] % 2 != nums[j - 1] % 2 )&& (nums[j] <= threshold)  )
                    {
                        current_size++;
                    }
                    else
                    {
                        break;
                    }
                }
                max_size = max(max_size, current_size);
            }
        }

        return max_size;
    }
};
*/
