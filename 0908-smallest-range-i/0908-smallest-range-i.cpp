class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        // Find the maximum and minimum values in the original array
        int maxVal = *max_element(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        
        // Calculate the new minimum and maximum possible values after adjustment
        int newMax = maxVal - k;
        int newMin = minVal + k;
        
        return max(0, newMax - newMin);
    }
};
