class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        // Count occurrences of each color
        for (auto i : nums) {
            mp[i]++;
        }
        // Clear the original vector
        nums.clear();
        // Refill the vector with sorted colors
        for (auto it : mp) {
            nums.insert(nums.end(), it.second, it.first);
        }
    }
};
