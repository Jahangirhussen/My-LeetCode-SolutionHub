#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        int left = 0, right = letters.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (letters[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left < letters.size() ? letters[left] : letters[0];
    }
};

int main()
{
    Solution solution;

    vector<char> letters = {'c', 'f', 'j'};
    char target;

    cout << "Enter target character: ";
    cin >> target;

    char result = solution.nextGreatestLetter(letters, target);
    cout << "Next greatest letter: " << result << endl;

    return 0;
}

