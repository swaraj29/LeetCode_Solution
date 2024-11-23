class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int maxRows = 0;
        for(auto &currRow : matrix){

            vector<int> inverted(cols);

            for(int i = 0; i < cols; i++){
                inverted[i] = currRow[i] == 0 ? 1 : 0;
            }

            int count = 0;

            for(auto &row : matrix){
                if(row == currRow || row == inverted){
                    count++;
                }
            }

            maxRows = max(maxRows, count);

        }

        return maxRows;
    }
};