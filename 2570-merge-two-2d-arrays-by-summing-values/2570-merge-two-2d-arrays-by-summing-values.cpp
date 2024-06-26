class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        // Map to store the cumulative sums of values by ID
        map<int, int> count;
        
        // Insert values from nums1 into the map
        for (const auto& x : nums1) {
            count[x[0]] += x[1];
        }
        
        // Insert values from nums2 into the map
        for (const auto& x : nums2) {
            count[x[0]] += x[1];
        }
        
        // Prepare the result vector
        vector<vector<int>> result;
        for (const auto& x : count) {
            result.push_back({x.first, x.second});
        }
        
        return result;
    }
};
