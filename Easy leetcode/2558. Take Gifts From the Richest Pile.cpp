#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long pickGifts(vector<int>& gifts, int k)
    {
        for (int i = 0; i < k; ++i)
        {
            sort(gifts.begin(), gifts.end(), greater<int>());

            gifts[0] = floor(sqrt(gifts[0]));
        }

        long long total = 0;
        for (int gift : gifts)
        {
            total += gift;
        }
        return total;
    }
};

int main()
{
    Solution ob1;
    int n, k;
    cin >> n >> k;

    vector<int> gifts(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> gifts[i];
    }

    cout << ob1.pickGifts(gifts, k) << endl;
    return 0;
}
