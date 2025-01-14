int GCD__(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution
{
public:
    int maxLength(vector<int>& nums)
    {
        int n = nums.size();
        int max_subArr = 0;

        for (int i = 0; i < n; i++)
        {
            long long pro = 1;
            int gcd_val = nums[i];
            int lcm_val = nums[i];

            for (int j = i; j < n; j++)
            {
                pro *= nums[j];
                if (pro > 1e9) break;

                gcd_val = GCD__(gcd_val, nums[j]);

                lcm_val = (lcm_val * nums[j]) / GCD__(lcm_val, nums[j]);

                if (lcm_val > 1e9) break;

                if (pro == 1LL * gcd_val * lcm_val)
                {
                    max_subArr = max(max_subArr, j - i + 1);
                }
            }
        }

        return max_subArr;
    }
};
