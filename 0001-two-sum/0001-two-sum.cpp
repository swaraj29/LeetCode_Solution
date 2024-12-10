class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];

            // Check if the complement exists in the map
            if (mp.find(comp) != mp.end()) {
                return {mp[comp], i};
            }

            // Store the current number and its index in the map
            mp[nums[i]] = i;
        }

        // If no solution is found, return an empty vector (or handle the error)
        return {};
    }
};
