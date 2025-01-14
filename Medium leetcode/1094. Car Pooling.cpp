#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool carPooling(vector<vector<int>>& trips, int capacity)
    {
        int stops[1001] = {0}, p = 0;
        for (auto& t : trips)
        {
            stops[t[1]] = stops[t[1]] + t[0];
            stops[t[2]] = stops[t[2]]  - t[0];
        }
        for (int i = 0; i < 1001 && p <= capacity; i++)
        {
            p = p + stops[i];
        }
        return p <= capacity;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};
    int capacity = 5;
    cout << (sol.carPooling(trips, capacity) ? "true" : "false") << endl;
    return 0;
}


int main()
{
    Solution sol;
    vector<vector<int>> trips1 = {{2, 1, 5}, {3, 3, 7}};
    int capacity1 = 4;

    cout << (sol.carPooling(trips1, capacity1) ? "true" : "false") << endl;

    vector<vector<int>> trips2 = {{2, 1, 5}, {3, 3, 7}};
    int capacity2 = 5;

    cout << (sol.carPooling(trips2, capacity2) ? "true" : "false") << endl;

    return 0;
}

