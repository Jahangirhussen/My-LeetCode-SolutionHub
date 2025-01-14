#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int last_3_is_big = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int first_2_minus_get_big = nums[0] * nums[1] * nums[n - 1];
        int ans = max(last_3_is_big, first_2_minus_get_big);
        return ans;
    }
};

/*

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int largest1 = INT_MIN, largest2 = INT_MIN, largest3 = INT_MIN;
        int smallest1 = INT_MAX, smallest2 = INT_MAX;

        for (int num : nums) {
            if (num > largest1) {
                largest3 = largest2;
                largest2 = largest1;
                largest1 = num;
            } else if (num > largest2) {
                largest3 = largest2;
                largest2 = num;
            } else if (num > largest3) {
                largest3 = num;
            }

            if (num < smallest1) {
                smallest2 = smallest1;
                smallest1 = num;
            } else if (num < smallest2) {
                smallest2 = num;
            }
        }

        int product1 = largest1 * largest2 * largest3;
        int product2 = smallest1 * smallest2 * largest1;

        return max(product1, product2);
    }
};

*/
int main()
{
    Solution ob1;
    vector<int> nums1 = {1, 2, 3};
    cout << "Maximum product: " << ob1.maximumProduct(nums1) << endl; // Output: 6

    vector<int> nums2 = {-1, -2,0, -3,3, 4};
    cout << "Maximum product: " << ob1.maximumProduct(nums2) << endl; // Output: 24

    vector<int> nums3 = {-1, -2, -3};
    cout << "Maximum product: " << ob1.maximumProduct(nums3) << endl; // Output: -6

    return 0;
}

