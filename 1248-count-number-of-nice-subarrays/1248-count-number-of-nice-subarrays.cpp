class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int oddCount = 0, result = 0;
        vector<int> prefix(nums.size() + 1, 0);
        prefix[0] = 1; // There's one way to have 0 odd numbers

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 1) {
                oddCount++;
            }
            if (oddCount >= k) {
                result += prefix[oddCount - k];
            }
            prefix[oddCount]++;
        }

        return result;
    }
};
