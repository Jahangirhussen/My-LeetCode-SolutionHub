#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "", w2 = "";
        for (auto x : word1) w1 += x;
        for (auto x : word2) w2 += x;
        return w1 == w2;
    }
};

int main() {
    Solution ob1;
    vector<string> word1 = {"a", "cb"};
    vector<string> word2 = {"ab", "c"};

    if (ob1.arrayStringsAreEqual(word1, word2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
