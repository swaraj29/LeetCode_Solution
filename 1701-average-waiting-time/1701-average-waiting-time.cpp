class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        vector<int> aw;
        int r = customers.size();
        int s = 0;

        for (int i = 0; i < r; i++) {
            int a = customers[i][0];
            int t = customers[i][1];
            int f, w;
            
            if (a > s) {
                f = a + t;
                s = f;
            } else {
                f = s + t;
                s = f;
            }
            
            w = f - a;
            aw.push_back(w);
        }
        double p = accumulate(aw.begin(), aw.end(), 0LL);
        p = p/aw.size();
        return p;     
    }
};
