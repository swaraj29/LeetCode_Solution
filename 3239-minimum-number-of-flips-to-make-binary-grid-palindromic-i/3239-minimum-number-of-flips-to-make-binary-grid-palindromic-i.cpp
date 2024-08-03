class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int rowFlips = 0;
        int colFlips = 0;

        // Calculate flips needed to make all rows palindromic
        for (int i = 0; i < r; i++) {
            int flips = 0;
            for (int j = 0; j < c / 2; j++) {
                if (grid[i][j] != grid[i][c - 1 - j]) {
                    flips++;
                }
            }
            rowFlips += flips;
        }

        // Calculate flips needed to make all columns palindromic
        for (int j = 0; j < c; j++) {
            int flips = 0;
            for (int i = 0; i < r / 2; i++) {
                if (grid[i][j] != grid[r - 1 - i][j]) {
                    flips++;
                }
            }
            colFlips += flips;
        }

        // The result is the minimum of flipping rows or flipping columns
        return min(rowFlips, colFlips);
    }
};
