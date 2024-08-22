class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid; // Target found, return its index
            } else if (nums[mid] < target) {
                start = mid + 1; // Search the right half
            } else {
                end = mid - 1; // Search the left half
            }
        }

        // When the loop ends, 'start' is the insertion point
        return start;
    }
};
