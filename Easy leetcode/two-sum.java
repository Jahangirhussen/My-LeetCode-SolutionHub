import java.util.HashMap;  // HashMap class is imported to store key-value pairs
import java.util.ArrayList;  // ArrayList class is imported to store the result dynamically
import java.util.List;  // List interface is used for the result

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hashMap = new HashMap<>();  // Creating a HashMap to store the number and its index

        // Loop through each element of the array
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];  // Find the complement by subtracting the current number from the target

            // If the complement is already in the HashMap, return the indices
            if (hashMap.containsKey(complement)) {  // Check if the complement exists in the map
                return new int[]{hashMap.get(complement), i};  // Return the indices of the complement and the current number
            }

            // If the complement is not found, store the number and its index in the HashMap
            hashMap.put(nums[i], i);
        }

        return new int[]{};  // Return an empty array if no solution is found
    }

    // Example usage:
    // Solution sol = new Solution();
    // int[] result = sol.twoSum(new int[]{2, 7, 11, 15}, 9);  // Output: [0, 1]
    // int[] result = sol.twoSum(new int[]{3, 2, 4}, 6);       // Output: [1, 2]
    // int[] result = sol.twoSum(new int[]{3, 3}, 6);          // Output: [0, 1]
}
