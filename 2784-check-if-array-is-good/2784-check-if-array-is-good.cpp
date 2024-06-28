class Solution {
public:
    bool isGood(vector<int>& nums) {
        // Sort the input vector nums
        sort(nums.begin(), nums.end());
        
        int n = nums.size(); // Get the size of nums
        vector<int> vec(n); // Create a new vector vec of size n
        
        // Copy elements from sorted nums to vec
        for (int i = 0; i < n; i++) {
            vec[i] = nums[i];
        }

        // Determine the maximum element in nums
        int a = *max_element(nums.begin(), nums.end());
        int b = a + 1;

        // Check if b is not equal to a
        if (b != n) {
            return false; // Return false if b is not equal to a
        } else {
            // Compare vec with sorted nums
            for (int i = 0; i < n; i++) {
                if (vec[i] != nums[i]) {
                    return false;
                }
            }
            return true; // Return true if vec matches sorted nums
        }
    }
};
