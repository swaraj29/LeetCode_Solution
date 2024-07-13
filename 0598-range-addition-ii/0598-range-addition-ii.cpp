class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        // If no operations are given, the whole matrix is filled with the same number
        if (ops.empty()) {
            return m * n;
        }

        // Initialize minRow and minCol with m and n
        int minRow = m;
        int minCol = n;

        // Find the minimum a and b values from the operations
        for (const auto& op : ops) {
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }

        // The result is the area of the smallest rectangle that all operations overlap
        return minRow * minCol;
    }
};
