#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int max_profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i-1])
            {
                max_profit = max_profit + ( prices[i] - prices[i-1] ) ;
            }
        }
        return max_profit;
    }
};


int main()
{
    Solution ob1;
    vector<int> prices= {1,2,8,5,4,5};
    cout << ob1.maxProfit(prices) << endl;

    return 0;
}

