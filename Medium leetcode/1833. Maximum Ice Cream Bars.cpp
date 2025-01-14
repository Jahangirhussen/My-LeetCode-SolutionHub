class Solution
{
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
        vector<int> mp(100001, 0);
        for (int x : costs)
        {
            mp[x]++;
        }

        int coin_use = 0;
        int buy_ice = 0;

        for (int tk = 1; tk <= 100000; ++tk)
        {
            while (mp[tk] > 0 && coin_use + tk <= coins)
            {
                coin_use = coin_use + tk;
                mp[tk]--;
                buy_ice++;
            }
        }

        return buy_ice;
    }
};

int main()
{
    Solution solution;
    vector<int> costs = {1, 3, 2, 4, 1};
    int coins = 7;

    int ret = solution.maxIceCream(costs, coins);
    cout << ret << endl;

    return 0;
}
