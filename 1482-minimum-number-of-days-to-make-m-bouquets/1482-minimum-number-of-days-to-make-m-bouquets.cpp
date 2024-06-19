class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long)m * k > n) {
            return -1; // If it's impossible to form m bouquets of k flowers each
        }
        
        int minDays = 0;
        int maxDays = *max_element(bloomDay.begin(), bloomDay.end());
        
        while (minDays < maxDays) {
            int mid = minDays + (maxDays - minDays) / 2;
            int bouquets = 0;
            int flowers = 0;
            
            for (int i = 0; i < n; ++i) {
                if (bloomDay[i] <= mid) {
                    flowers++;
                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
            }
            
            if (bouquets >= m) {
                maxDays = mid; // Try to minimize days
            } else {
                minDays = mid + 1; // Increase days
            }
        }
        
        return minDays;
    }
};
