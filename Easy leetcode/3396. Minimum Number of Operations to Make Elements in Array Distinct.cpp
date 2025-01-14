class Solution
{
public:
    int minimumOperations(vector<int>& nums)
    {
        unordered_map<int, int> mp;
        int operations = 0;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            mp[nums[i]]++;

            if ( mp[nums[i]] > 1)
            {
                operations += ceil((i+1) / 3.0);
                return operations;
            }


        }



        return 0;
    }
};
