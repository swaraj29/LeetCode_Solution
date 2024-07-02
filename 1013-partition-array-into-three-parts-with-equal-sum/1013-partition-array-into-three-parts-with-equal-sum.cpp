class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;

        // Calculate the total sum of the array
        for (int num : arr) {
            totalSum += num;
        }

        // If the total sum is not divisible by 3, return false
        if (totalSum % 3 != 0) {
            return false;
        }

        int target = totalSum / 3;
        int currentSum = 0;
        int count = 0;

        // Iterate through the array and find partitions
        for (int num : arr) {
            currentSum += num;

            // If current sum equals target, we found a partition
            if (currentSum == target) {
                count++;
                currentSum = 0;  // reset current sum for the next partition
            }
        }

        // We need at least three partitions to make three parts with equal sum
        return count >= 3;
    }
};
