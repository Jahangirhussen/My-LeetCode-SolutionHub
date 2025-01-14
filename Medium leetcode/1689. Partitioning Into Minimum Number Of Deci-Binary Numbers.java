class Solution {
    public int minPartitions(String n) {
        int bigDigit = 0;
        for (char c : n.toCharArray()) {
            bigDigit = Math.max(bigDigit, c - '0');
            if (bigDigit == 9) {
                break;
            }
        }
        return bigDigit;
    }
}

