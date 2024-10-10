class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        int maxWidth = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j > i; j--) {
                if (nums[i] <= nums[j]) {
                    maxWidth = max(maxWidth, j - i);
                    break;
                }
            }
        }
        return maxWidth;
    }
};
