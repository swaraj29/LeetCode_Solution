class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;

        // Iterate over all possible starting points of subarrays
        for (int i = 0; i < n; ++i) {
            // Iterate over all possible ending points of subarrays starting from i
            for (int j = i; j < n; ++j) {
                // Calculate the length of the current subarray
                int length = j - i + 1;
                
                // Check if the length is odd
                if (length % 2 == 1) {
                    // Sum up all elements in the current subarray
                    for (int k = i; k <= j; ++k) {
                        totalSum += arr[k];
                    }
                }
            }
        }

        return totalSum;
    }
};
