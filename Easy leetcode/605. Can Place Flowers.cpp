#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int count = 0;

        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0 &&
                    (i == 0 || flowerbed[i-1] == 0) && // No flower to the left
                    (i == flowerbed.size() - 1 || flowerbed[i+1] == 0)) // No flower to the right
            {
                flowerbed[i] = 1;
                count++;
                if (count >= n)
                {
                    return true;
                }
            }
        }
        return count >= n;
    }
};

int main()
{
    Solution solution;
    int x, n;
    cin >> x;
    vector<int> flowerbed(x);
    for (int i = 0; i < x; i++)
    {
        cin >> flowerbed[i];
    }
    cin >> n;
    cout << solution.canPlaceFlowers(flowerbed, n) << endl; // Output result
    return 0;
}
