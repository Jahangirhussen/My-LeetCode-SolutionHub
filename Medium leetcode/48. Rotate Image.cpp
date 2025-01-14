#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int n = matrix.size();

        for (int Row = 0; Row < n; ++Row)
        {
            for (int column = Row + 1; column < n; ++column)
            {
                swap(matrix[Row][column], matrix[column][Row]);
            }
        }

        for (int Row = 0; Row < n; ++Row)
        {
            reverse(matrix[Row].begin(), matrix[Row].end());
        }
    }
};

int main()
{
    Solution solution;

    vector<vector<int>> matrix1 =
    {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };

    // দ্বিতীয় ইনপুট
    vector<vector<int>> matrix2 =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // প্রথম ম্যাট্রিক্স প্রসেসিং
    cout << "Original Matrix 1:" << endl;
    for (const auto& row : matrix1)
    {
        for (const auto& val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    solution.rotate(matrix1);

    cout << "Rotated Matrix 1:" << endl;
    for (const auto& row : matrix1)
    {
        for (const auto& val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << endl;

    // দ্বিতীয় ম্যাট্রিক্স প্রসেসিং
    cout << "Original Matrix 2:" << endl;
    for (const auto& row : matrix2)
    {
        for (const auto& val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    solution.rotate(matrix2);

    cout << "Rotated Matrix 2:" << endl;
    for (const auto& row : matrix2)
    {
        for (const auto& val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
