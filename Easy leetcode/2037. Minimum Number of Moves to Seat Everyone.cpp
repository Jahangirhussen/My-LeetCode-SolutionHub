#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students)
    {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int moves = 0;
        for (int i = 0; i < seats.size(); i++)
        {
            moves = moves + abs(seats[i] - students[i]);
        }
        return moves;
    }
};

int main()
{
    Solution ob1;
    int n;
    cout << "Enter number of seats/students: ";
    cin >> n;

    vector<int> seats(n), students(n);

    cout << "Enter positions of seats: ";
    for (int i = 0; i < n; i++)
    {
        cin >> seats[i];
    }

    cout << "Enter positions of students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    }

    int result = ob1.minMovesToSeat(seats, students);
    cout << "Minimum number of moves: " << result << endl;

    return 0;
}
