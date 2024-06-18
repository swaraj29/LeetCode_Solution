class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int p = 0;
        int s = 0;
        int n = worker.size();
        int m = difficulty.size();

        for(int i = 0; i < n; i++){
            p = 0;
            for(int j = 0; j < m; j++){
                if(worker[i] >= difficulty[j]){
                    p = max(p, profit[j]);
                }
            }
            s += p;
        }
        return s;
    }
};
