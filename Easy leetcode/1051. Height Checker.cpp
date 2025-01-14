#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> sorted_heights = heights;
        sort(sorted_heights.begin(), sorted_heights.end());

        int count = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != sorted_heights[i])
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> heights = {5, 1, 2, 3, 4};
    cout << sol.heightChecker(heights) << endl;
    return 0;
}
