class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> pairs(n);
        
        // Store the value and its index
        for (int i = 0; i < n; ++i) {
            pairs[i] = {nums[i], i};
        }

        // Sort based on the values
        sort(pairs.begin(), pairs.end());

        int maxWidth = 0;
        int minIndex = pairs[0].second; // Start with the first index

        // Traverse the sorted pairs
        for (int j = 1; j < n; ++j) {
            // Update the minimum index found so far
            minIndex = min(minIndex, pairs[j].second);
            // Calculate width
            maxWidth = max(maxWidth, pairs[j].second - minIndex);
        }

        return maxWidth;
    }
};
