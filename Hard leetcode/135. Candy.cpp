#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int candy(vector<int>& ratings)
    {
        int n = ratings.size();
        vector<int> candies(n, 1);

        // বামে থেকে ডানে চলো
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // ডানে থেকে বামে চলো
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
            {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        int total = 0;
        for (int val : candies)
        {
            total = total + val;
        }

        return total;
    }
};

int main()
{
    Solution ob1;
    vector<int> ratings = {1, 0, 2};
    cout << ob1.candy(ratings) << endl;

    return 0;
}
