#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minimumOperations(vector<int>& nums)
    {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(!(nums[i] % 3==0))
            {
                count = count +  min(nums[i] % 3, 3 - (nums[i] % 3));
            }
        }
        return count;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << obj.minimumOperations(nums) << endl;
    return 0;
}
