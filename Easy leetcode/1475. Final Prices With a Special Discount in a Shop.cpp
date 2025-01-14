#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> finalPrices(vector<int>& prices)
    {
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] <= prices[i])
                {
                    prices[i] =  prices[i] - prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};

int main()
{
    Solution ob1;

    int n;
    cin >> n;

    vector<int> prices;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }

    vector<int> result = ob1.finalPrices(prices);

    for (int price : result)
    {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}
