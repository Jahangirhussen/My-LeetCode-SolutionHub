class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int x = 0; // Initial value of X
        for (String op : operations) { // Iterate through each operation
            if (op.equals("++X") || op.equals("X++")) {
                x++; // Increment X by 1
            } else if (op.equals("--X") || op.equals("X--")) {
                x--; // Decrement X by 1
            }
        }
        return x; // Return the final value of X
    }
}

