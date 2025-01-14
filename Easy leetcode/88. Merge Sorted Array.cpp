#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        nums1.resize(m);  // শুধু nums1 এর প্রথম m উপাদান রাখি
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};
/*
class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int> result;

        for (int i = 0; i < m; i++)
        {
            result.push_back(nums1[i]);
        }

        for (int i = 0; i < n; i++)
        {
            result.push_back(nums2[i]);
        }
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            nums1[i] = result[i];
        }
    }
};
*/
int main()
{
    Solution ob1;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    ob1.merge(nums1, m, nums2, n);



    return 0;
}
