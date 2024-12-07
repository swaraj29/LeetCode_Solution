class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        int ms = 0;
        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (find(banned.begin(), banned.end(), i) == banned.end()) {
                if (ms + i <= maxSum) {
                    ms += i;
                    count++;
                } else {
                    break;
                }
            }
        }
        return count;
    }
};
