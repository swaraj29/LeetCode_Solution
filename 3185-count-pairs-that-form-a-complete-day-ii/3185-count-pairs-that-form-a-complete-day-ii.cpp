#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> remainderCount;
        long long count = 0;

        // Count frequencies of remainders
        for (int hour : hours) {
            int remainder = hour % 24;
            remainderCount[remainder]++;
        }

        // Calculate pairs
        for (int i = 0; i < 24; i++) {
            if (remainderCount.find(i) != remainderCount.end()) {
                int complement = (24 - i) % 24;
                if (remainderCount.find(complement) != remainderCount.end()) {
                    if (i == complement) {
                        // Special case: pairs of the same remainder
                        count += (long long)remainderCount[i] * (remainderCount[i] - 1) / 2;
                    } else if (i < complement) {
                        // Pairs of different remainders
                        count += (long long)remainderCount[i] * remainderCount[complement];
                    }
                }
            }
        }

        return count;
    }
};
