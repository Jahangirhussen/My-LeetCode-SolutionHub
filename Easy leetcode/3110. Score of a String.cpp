#include <iostream>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for (int i = 1; i < s.length(); i++) {
            score =score + abs(s[i] - s[i - 1]);
        }
        return score;
    }
};

int main() {
    string s;
    cin >> s;
    Solution solution;
    cout << solution.scoreOfString(s) << endl;
    return 0;
}
