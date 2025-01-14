import java.util.*;

class Solution {
    public int minimumSum(int num) {
        int[] x = new int[4];
        for (int i = 0; i < 4; i++) {
            x[i] = num % 10;
            num /= 10;
        }
        Arrays.sort(x);
        return (x[0] * 10 + x[3]) + (x[1] * 10 + x[2]);
    }
}

