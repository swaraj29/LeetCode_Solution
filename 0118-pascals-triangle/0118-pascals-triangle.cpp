class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec; // Initialize the vector of vectors

        // Loop through each row
        for (int i = 0; i < numRows; i++) {
            vector<int> ans(i + 1, 1); // Initialize the current row with 1s

            // Calculate the values for the current row based on the previous row
            for (int j = 1; j < i; j++) {
                ans[j] = vec[i - 1][j - 1] + vec[i - 1][j];
            }

            vec.push_back(ans); // Add the current row to the main vector
        }
        return vec;
    }
};
