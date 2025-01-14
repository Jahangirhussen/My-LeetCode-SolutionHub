#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> substitutionTable;
        char currentChar = 'a';

        // Step 1: Create the substitution table
        for (char x : key)
        {
            if (x != ' ' && substitutionTable.find(x) == substitutionTable.end())
            {
                substitutionTable[x] = currentChar;
                currentChar++;
                if (currentChar > 'z') break; //    currentChar = 'a';

            }
        }

        // Step 2: Decode the message
        string decodedMessage;
        for (char x : message)
        {
            if (x == ' ')
            {
                decodedMessage += ' ';
            }
            else
            {
                decodedMessage += substitutionTable[x];
            }
        }

        return decodedMessage;
    }
};

int main()
{
    Solution solution;

    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string decodedMessage = solution.decodeMessage(key, message);

    cout << "Decoded Message: " << decodedMessage << endl;

    return 0;
}
