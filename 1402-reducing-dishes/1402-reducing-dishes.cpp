class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int total = 0, currentSum = 0, maxSum = 0;
        int n = satisfaction.size();

        for (int i = n - 1; i >= 0; --i) {
            currentSum += satisfaction[i];
            total += currentSum;
            if (total > maxSum) {
                maxSum = total;
            }
        }

        return maxSum;
    }
};
