#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int isWinner(vector<int>& player1, vector<int>& player2)
    {
        int s1 = 0, s2 = 0;
        int n = player1.size();

        for (int i = 0; i < n; ++i)
        {
            // Player 1 score calculation
            if (i > 0 && player1[i - 1] == 10)
                s1 += 2 * player1[i];
            else if (i > 1 && player1[i - 2] == 10)
                s1 += 2 * player1[i];
            else
                s1 += player1[i];

            // Player 2 score calculation
            if (i > 0 && player2[i - 1] == 10)
                s2 += 2 * player2[i];
            else if (i > 1 && player2[i - 2] == 10)
                s2 += 2 * player2[i];
            else
                s2 += player2[i];
        }

        if (s1 == s2)
            return 0;
        else if (s1 > s2)
            return 1;
        else
            return 2;
    }
};

int main()
{
    Solution ob1;

    // Example 1:
    vector<int> player1 = {5, 10, 3, 2};
    vector<int> player2 = {6, 5, 7, 3};
    cout << "Winner: " << ob1.isWinner(player1, player2) << endl;  // Output: 1 (Player 1 wins)

    // Example 2:
    vector<int> player1_2 = {3, 5, 7, 6};
    vector<int> player2_2 = {8, 10, 10, 2};
    cout << "Winner: " << ob1.isWinner(player1_2, player2_2) << endl;  // Output: 2 (Player 2 wins)

    return 0;
}
