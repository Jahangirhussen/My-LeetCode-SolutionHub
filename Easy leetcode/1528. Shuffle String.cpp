#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        vector<pair<int, char>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({indices[i], s[i]});
        }

        sort(v.begin(), v.end());

        string result = "";
        for (int i = 0; i < n; i++) {
            result += v[i].second;
        }

        return result;
    }
};

int main() {
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    Solution solution;
    cout << solution.restoreString(s, indices) << endl;

    return 0;
}
