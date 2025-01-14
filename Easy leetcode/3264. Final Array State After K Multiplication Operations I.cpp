#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier)
    {
        while (k > 0)
        {
            int m=INT_MAX,index=0;
            for(int i=0; i<nums.size(); i++)
            {
                if(m>nums[i])
                {
                    index=i;
                    m= nums[i];
                }

            }
            nums[index]=nums[index]*multiplier;
            k--;
        }
        return nums;
    }
};

int main()
{
    Solution ob1;
    vector<int> nums;
    int n, k, multiplier;

    cout << "Enter size of nums array: ";
    cin >> n;

    cout << "Enter elements of nums array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    cout << "Enter value of k: ";
    cin >> k;

    cout << "Enter value of multiplier: ";
    cin >> multiplier;

    vector<int> result = ob1.getFinalState(nums, k, multiplier);

    cout << "Final state of nums array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
/*
class Solution
{
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier)
    {
        while (k > 0)
        {
            int index = min_element(nums.begin(), nums.end()) - nums.begin();

            nums[index] *= multiplier;
            k--;
        }
        return nums;
    }
};
*/
