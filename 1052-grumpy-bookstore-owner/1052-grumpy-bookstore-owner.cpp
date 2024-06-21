class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int unsat = 0;

        // Calculate initial unsatisfied customers in the first 'minutes' window
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                unsat += customers[i];
            }
        }

        int maxUnsat = unsat;

        // Use two pointers i and j to define the sliding window of size 'minutes'
        int i = 0;
        int j = minutes;

        while (j < n) {
            if (grumpy[j] == 1) {
                unsat += customers[j];     // Include current element
            }
            if (grumpy[i] == 1) {
                unsat -= customers[i];    // Remove element going out of window
            }
            maxUnsat = max(maxUnsat, unsat);     // Update maxUnsat
            i++;
            j++;
        }

        int totalCustomers = maxUnsat;

        // Calculate total satisfied customers
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                totalCustomers += customers[i];
            }
        }

        return totalCustomers;
    }
};
// sliding window identify karte hai 
// 1. fixed size honaa chaiyaa -> minutes = 3;
// 2. subarray type hint kar raha ho -> consecutive

