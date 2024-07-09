class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        vector<long long> aw;
        long long r = customers.size();
        long long s = 0;

        for (int i = 0; i < r; i++) {
            long long a = customers[i][0];
            long long t = customers[i][1];
            long long f, w;
            
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
