
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0; // Initial value of X
        for (string op : operations) { // Iterate through each operation
            if (op == "++X" || op == "X++") {
                x++; // Increment X by 1
            } else if (op == "--X" || op == "X--") {
                x--; // Decrement X by 1
            }
        }
        return x; // Return the final value of X
    }
};
