class Solution
{
public:
    int countSubarrays(vector<int>& nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            int x= 2 * (nums[i] + nums[i + 2]);
            int y=nums[i + 1];
            if ( x == y)
            {
                count++;
            }
        }
        return count;
    }
};
