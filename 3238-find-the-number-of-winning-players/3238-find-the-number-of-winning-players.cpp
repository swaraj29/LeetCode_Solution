class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
 
        vector<vector<int>> count(n, vector<int>(11, 0));
        for(auto& pic : pick) {
            int player = pic[0];
            int color = pic[1];
            count[player][color]++;
        }
        
        int won = 0;
        
        for(int i = 0; i < n; i++) {
            for(int color = 0; color < 11; color++) {
                if(count[i][color] > i) {
                    won++;
                    break;
                }
            }
        }
        
        return won;
    }
};
