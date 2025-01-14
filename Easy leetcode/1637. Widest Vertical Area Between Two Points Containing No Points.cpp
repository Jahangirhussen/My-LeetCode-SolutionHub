#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points)
    {
        vector<int> x_axis;
        for (auto& i : points)
        {
            x_axis.push_back(i[0]);
        }

        sort(x_axis.begin(), x_axis.end());

        int width = 0;
        for (int i = 1; i < x_axis.size(); i++)
        {
            width = max(width, x_axis[i] - x_axis[i - 1]);
        }

        return width;
    }
};

int main()
{
    Solution solution;
    vector<vector<int>> points;

    int n;
    cout << "Enter the number of points: ";
    cin >> n;

    cout << "Enter the points (x y):" << endl;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    cout << "The maximum width of vertical area is: ";
    cout << solution.maxWidthOfVerticalArea(points) << endl;

    return 0;
}
/*
ইনপুট:
points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]

ব্যাখ্যা:
এই বিন্দুগুলোর x মান হলো [3, 9, 1, 1, 5, 8]।
প্রথমে x মানগুলো ক্রম অনুযায়ী সাজাই: [1, 1, 3, 5, 8, 9]।

এখন, উল্লম্ব অঞ্চলের জন্য দুই x-মানের মধ্যে পার্থক্য হিসাব করি:

1 - 1 = 0
3 - 1 = 2
5 - 3 = 2
8 - 5 = 3
9 - 8 = 1
সবচেয়ে বড় পার্থক্য হলো 3।
আউটপুট: 3


*/

