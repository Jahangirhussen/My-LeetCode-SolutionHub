#include <iostream>
#include <vector>
#include <cmath> // For pow()

using namespace std;

class Solution
{
public:
    int subsetXORSum(vector<int>& nums)
    {
        int sum = 0;
        int n = nums.size();
        int totalSubsets = pow(2, n); // Using pow(2, n) instead of 1 << n

        for (int i = 0; i < totalSubsets; i++)
        {
            int XOR = 0;

            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))   // Checking bitwise operation
                {
                    XOR = XOR ^ nums[j];
                }
            }
            sum = sum + XOR;
        }

        return sum;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {5, 1, 6};
    vector<int> nums3 = {3, 4, 5, 6, 7, 8};
    vector<int> nums4 = {3, 4, 5, 6, 7, 8,9,10,11};

    cout << solution.subsetXORSum(nums1) << endl;  // Output: 6
    cout << solution.subsetXORSum(nums2) << endl;  // Output: 28
    cout << solution.subsetXORSum(nums3) << endl;  // Output: 480
    cout << solution.subsetXORSum(nums4) << endl;  // Output: 3840

    return 0;
}
/**
Example 2: nums = {5, 1, 6}

nums = [5, 1, 6]
Size of array n = 3
Total subsets = pow(2, 3) = 8 (possible subsets are 8)

|Mask(i)---|------Subset------|--XOR_Calculation--------|XOR_Value(result)--|
|0---------|--------{}--------|-------0-----------------|------0------------|
|1---------|--------{5}-------|-------5-----------------|------5------------|
|2---------|--------{1}-------|-------1-----------------|------1------------|
|3---------|--------{5,1}-----|-------5XOR-1=4----------|------4------------|
|4---------|--------{6}}------|-------6-----------------|------6------------|
|5---------|--------{5,6}}----|-------5XOR6=3-----------|------3------------|
|6---------|--------{1,6}}----|-------1XOR6=7-----------|------7------------|
|7---------|--------{5,1,6}}--|-------5XOR1XOR6=2-------|------2------------|
 Summing up all XOR values:XOR sum = 0 + 5 + 1 + 4 + 6 + 3 + 7 + 2 = 28



*/

