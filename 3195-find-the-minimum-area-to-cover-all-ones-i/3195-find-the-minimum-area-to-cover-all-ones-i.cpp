class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int minRow = r, maxRow = -1, minCol = c, maxCol = -1;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 1) {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }

        // If no 1s are found, return 0
        if (maxRow == -1) {
            return 0;
        }

        int height = maxRow - minRow + 1;
        int width = maxCol - minCol + 1;

        return height * width;
    }
};
