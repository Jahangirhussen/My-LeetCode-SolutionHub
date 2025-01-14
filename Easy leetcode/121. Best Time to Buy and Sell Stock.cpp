
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int min_price = INT_MAX;  // সর্বনিম্ন দাম ট্র্যাক করা
        int max_profit = 0;       // সর্বোচ্চ লাভ ট্র্যাক করা

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min_price)
            {
                min_price = prices[i];
            }
            else if ( (prices[i] - min_price) > max_profit)
            {
                max_profit = prices[i] - min_price;
            }

            cout<<"min   max "<<min_price<<"__ "<<max_profit<<"__"<<endl;
        }

        return max_profit;
    }
};


int main()
{
    Solution ob1;
    vector<int> prices= {7,1,5,2,6,10};
    cout << ob1.maxProfit(prices) << endl;

    return 0;
}
