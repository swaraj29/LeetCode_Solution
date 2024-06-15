class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != m * n){
            return {};
        }
        int k = 0;
        // Initialize the 2D vector with dimensions m x n
        vector<vector<int>> matrix(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = original[k];
                k++;
            }
        }
        return matrix;
    }
};

