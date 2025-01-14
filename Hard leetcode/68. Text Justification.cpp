#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        vector<string> line;
        int size_word = 0;

        for (string& word : words) {
            if (size_word + word.length() + line.size() > maxWidth) {
                int totalSpaces = maxWidth - size_word;
                for (int i = 0; i < totalSpaces; ++i) {
                    int gapIndex;
                    if (line.size() - 1 > 0) {
                        gapIndex = i % (line.size() - 1);
                    } else {
                        gapIndex = 0;
                    }
                    line[gapIndex] += " ";
                }

                string justifiedLine = "";
                for (string& w : line) justifiedLine += w;
                result.push_back(justifiedLine);

                line.clear();
                size_word = 0;
            }

            line.push_back(word);
            size_word += word.length();
        }

        string lastLine = "";
        for (string& w : line) lastLine += w + " ";
        lastLine.resize(maxWidth, ' ');
        result.push_back(lastLine);

        return result;
    }
};

int main()
{
    Solution solution;
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 16;

    // সাজানো টেক্সট পাওয়া
    vector<string> result = solution.fullJustify(words, maxWidth);

    // ফলাফল প্রিন্ট করা
    for (string& line : result)
    {
        cout << "\"" << line << "\"" << endl;
    }

    return 0;
}
