#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> answer(n, 1);

        vector<int> left_mul(n, 1);
        left_mul[0] = 1;
        for (int i = 1; i < n; i++)
        {
            left_mul[i] = left_mul[i - 1] * nums[i - 1];
        }

        vector<int> right_mul(n, 1);
        right_mul[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            right_mul[i] = right_mul[i + 1] * nums[i + 1];
        }



        for (int i = 0; i < n; i++)
        {
            answer[i] = left_mul[i] * right_mul[i];
        }

        return answer;
    }
};

/*
class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size(), zero=0, total_mul =1;
        vector<int> answer(n, 0);

        for (int i = 0; i < n; i++)
        {
            if(nums[i]!=0)
            {
                total_mul  = total_mul  * nums[i];
            }
            else if (nums[i] == 0)
            {
                zero++;
            }
        }

        if (zero > 1)
        {
            return answer;
        }

        else  if(zero==0)
        {
            for (int i = 0; i < n; i++)
            {


                int x = (total_mul  / nums[i]);
                answer[i]=x;

            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i]==0)
                {
                    answer[i]=total_mul;
                }
            }
        }
        return answer;
    }
};
*/
int main()
{
    Solution ob1;

    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> result1 = ob1.productExceptSelf(nums1);
    cout << "Example 1 Output: ";
    for (auto x : result1)
    {
        cout << x << " ";
    }

    vector<int> nums2 = {-1, 1, 0, -3, 3,0};
    vector<int> result2 = ob1.productExceptSelf(nums2);
    cout << "\nExample 2 Output: ";
    for (auto x : result2)
    {
        cout << x << " ";
    }

    return 0;
}
