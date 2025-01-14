class Solution
{
public:
    int maxDistinctElements(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());

        int lastValue = -1e9;
        int distinctCount = 0;

        for (int num : nums)
        {
            if (num - k > lastValue)
            {
                lastValue = num - k;
                distinctCount++;
            }
            else if (num + k > lastValue)
            {
                lastValue += 1;
                distinctCount++;
            }
        }

        return distinctCount;
    }
};
