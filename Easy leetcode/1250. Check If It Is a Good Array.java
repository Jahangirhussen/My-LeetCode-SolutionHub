import java.util.*;

class Solution {
    public boolean isGoodArray(int[] nums) {
        int g = nums[0];
        for (int i = 1; i < nums.length; i++) {
            g = gcd(g, nums[i]);
            if (g == 1) {
                return true;
            }
        }
        return g == 1; // g==1 hole true jabe na hole flase jabe
    }

    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}

