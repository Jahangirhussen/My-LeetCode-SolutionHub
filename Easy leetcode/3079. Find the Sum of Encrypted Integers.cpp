#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int sumOfEncryptedInt(vector<int>& nums)
    {
        int total = 0;
        for (int n : nums)
            total += encrypt(n);
        return total;
    }

    int encrypt(int n)
    {
        int big_digit = 0;
        int orginal_n = n;
        while (n > 0)
        {
            big_digit = max(big_digit, n % 10);
            n /= 10;
        }
        int E_num = 0;
        while (orginal_n > 0)
        {
            E_num = E_num * 10 + big_digit;
            orginal_n /= 10;
        }
        return E_num;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {10, 21, 31};

    cout << solution.sumOfEncryptedInt(nums1) << endl; // Output: 6
    cout << solution.sumOfEncryptedInt(nums2) << endl; // Output: 66

    return 0;
}
