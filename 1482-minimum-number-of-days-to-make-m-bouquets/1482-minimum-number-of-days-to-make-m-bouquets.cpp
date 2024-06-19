class Solution {
public:
    int getNumOfBouquets(vector<int>& bloomDay, int mid, int k) {
        int numOfBouquets = 0;
        int consecutive_count = 0;
        
        // Find count of consecutive flowers you can pick at mid day.
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                consecutive_count++;
            } else {
                consecutive_count = 0;
            }
            if (consecutive_count == k) {
                numOfBouquets++;
                consecutive_count = 0;
            }
        }
        return numOfBouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int start_day = 0;
        int end_day   = *max_element(bloomDay.begin(), bloomDay.end());

        int minDays = -1;

        while (start_day <= end_day) {
            int mid = start_day + (end_day - start_day)/2;

            if (getNumOfBouquets(bloomDay, mid, k) >= m) {
                minDays = mid;
                end_day = mid - 1;
            } else {
                start_day = mid + 1;
            }
        }

        return minDays;
    }
};
