#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;

        // Merge two sorted arrays
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements if any
        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }

        // Find median
        int n = merged.size();
        if (n % 2 == 0) {
            return (merged[n/2 - 1] + merged[n/2]) / 2.0;
        } else {
            return merged[n/2];
        }
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;  // Output: 2.00000

    vector<int> nums1_2 = {1, 2};
    vector<int> nums2_2 = {3, 4};
    cout << solution.findMedianSortedArrays(nums1_2, nums2_2) << endl;  // Output: 2.50000

    return 0;
}
