class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int r = mat.size();
        int c = mat[0].size();
        int mc = 0;
        int index = 0;

        for(int i = 0; i < r; i++){
            int count = 0;
            for(int j = 0; j < c; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > mc){
                mc = count;
                index = i;
            }
        }

        return {index, mc};
    }
};