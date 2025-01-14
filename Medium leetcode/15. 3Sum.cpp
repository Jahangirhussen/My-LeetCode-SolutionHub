#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int left = i + 1, right = nums.size() - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // দ্বিতীয় এবং তৃতীয় উপাদানের জন্য ডুপ্লিকেট বাদ দেওয়া
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0)
                {
                    left++; // যোগফল বাড়াতে লেফট পয়েন্টার সরানো
                }
                else
                {
                    right--; // যোগফল কমাতে রাইট পয়েন্টার সরানো
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution ob1;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = ob1.threeSum(nums);

    for (const auto& triplet : ans)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ",";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}

