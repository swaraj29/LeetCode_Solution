class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int n = position.size();
        int minForce = 1;  // Minimum possible distance
        int maxForce = position[n-1] - position[0];  // Maximum possible distance
        int result = 0;

        while (minForce <= maxForce) {
            int midForce = minForce + (maxForce - minForce) / 2;
            int countBalls = 1;
            int prev = position[0];

            for (int i = 1; i < n; i++) {
                if (position[i] - prev >= midForce) {
                    countBalls++;
                    prev = position[i];
                    if (countBalls == m)
                        break;
                }
            }

            if (countBalls >= m) {
                result = midForce;  // Update result if current midForce is valid
                minForce = midForce + 1;  // Try for a larger distance
            } else {
                maxForce = midForce - 1;  // Try for a smaller distance
            }
        }
        return result;
    }
};
