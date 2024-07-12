class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        // Create a vector to store the cell coordinates and their distances
        vector<pair<int, vector<int>>> cells;

        // Generate all cell coordinates and calculate distances
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                int distance = abs(rCenter - i) + abs(cCenter - j);
                cells.push_back({distance, {i, j}});
            }
        }

        // Sort cells based on distance
        sort(cells.begin(), cells.end());

        // Extract the sorted coordinates
        vector<vector<int>> result;
        for (auto& cell : cells) {
            result.push_back(cell.second);
        }

        return result;
    }
};
