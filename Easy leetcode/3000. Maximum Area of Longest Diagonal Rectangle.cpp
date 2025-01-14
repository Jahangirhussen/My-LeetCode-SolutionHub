#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions)
    {
        int maxArea = 0;
        double maxDiagonal = 0;

        for (auto& a : dimensions)
        {
            double diagonal = sqrt( a[0] * a[0] + a[1] * a[1]);

            if (diagonal > maxDiagonal)
            {
                maxDiagonal = diagonal;
                maxArea = a[0] * a[1];
            }
            else if (diagonal == maxDiagonal)
            {
                maxArea = max(maxArea, a[0] * a[1]);
            }
        }

        return maxArea;
    }
};

int main()
{
    Solution ob1;
    vector<vector<int>> dimensions = {{3, 4}, {4, 3}, {7, 24}, {15, 20}}; // Sample input

    cout << ob1.areaOfMaxDiagonal(dimensions) << endl;  // Output: 300

    return 0;
}

/*
Let's say why we nedd to use: else if (diagonal == maxDiagonal){ maxArea = max(maxArea, a[0] * a[1]); }
example 01:
First rectangle: (3, 4)
Diagonal: sqrt(3*3 + 4*4) = sqrt(9 + 16) = sqrt(25) = 5
Area: 3 * 4 = 12

Second rectangle: (4, 3)
Diagonal: sqrt(4*4 + 3*3) = sqrt(16 + 9) = sqrt(25) = 5
Area: 4 * 3 = 12


example 02:
first rectangle: (7, 24)
Diagonal: sqrt(7*7 + 24*24) = sqrt(49 + 576) = sqrt(625) = 25
Area: 7 * 24 = 168

second rectangle: (15, 20)
Diagonal: sqrt(15*15 + 20*20) = sqrt(225 + 400) = sqrt(625) = 25
Area: 15 * 20 = 300

Here, two rectangles have the same diagonal (25), but their areas are different.
One has an area of 168 and the other has 300.
Thus, the rectangle with the largest area (300) will be returned.
*/
