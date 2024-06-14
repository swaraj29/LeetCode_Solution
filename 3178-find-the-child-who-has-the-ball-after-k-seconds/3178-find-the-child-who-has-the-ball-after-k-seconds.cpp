class Solution {
public:
    int numberOfChild(int n, int k) {
        int direction = 1; // 1 means right, -1 means left
        int position = 0;  // Starting position

        for (int steps = 0; steps < k; ++steps) {
            position += direction;

            // Change direction if at either end
            if (position == 0 || position == n - 1) {
                direction = -direction;
            }
        }
        return position;
    }
};
