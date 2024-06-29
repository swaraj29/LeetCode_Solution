class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        // Calculate the total sum of all elements in nums
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate through nums to find the middle index
        for (int i = 0; i < nums.size(); ++i) {
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i];
        }

        // If no middle index found, return -1
        return -1;
    }
};
