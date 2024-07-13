class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        vector<vector<int>>vec(m, vector<int>(n,0));

        for(auto op: ops){
            int a = op[0];
            int b = op[1];

            for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                    vec[i][j]++;
                }
            }
        }
        int maxElement = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                maxElement = max(maxElement, vec[i][j]);
            }
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(maxElement == vec[i][j]){
                    count ++;   
                }

            }
        }
        return count;
        
    }
};