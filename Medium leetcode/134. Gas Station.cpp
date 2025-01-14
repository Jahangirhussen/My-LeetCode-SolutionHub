#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int total_gas = 0, total_cost = 0;
        int current_gas = 0, starting_station_index = 0;

        for (int i = 0; i < gas.size(); ++i)
        {
            total_gas = total_gas + gas[i];
            total_cost = total_cost + cost[i];

            current_gas =  current_gas + gas[i] - cost[i];
            if (current_gas < 0)
            {
                current_gas = 0;
                starting_station_index = i + 1;
            }
        }

        // যদি মোট গ্যাস (total_gas) মোট খরচ (total_cost) এর চেয়ে কম হয়, তাহলে পুরো রাউন্ড সম্পন্ন করা সম্ভব নয়
        if (total_gas < total_cost)
        {
            return -1;
        }

        return starting_station_index;  // সঠিক স্টেশন ইনডেক্স রিটার্ন করা হচ্ছে
    }
};

int main()
{
    Solution ob1;

    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    cout << ob1.canCompleteCircuit(gas, cost) << endl;

    return 0;
}
