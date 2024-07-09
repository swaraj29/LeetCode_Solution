class Solution {
public:
    double averageWaitingTime(std::vector<std::vector<int>>& customers) {
        
        std::vector<long long> aw;  // Change vector<int> to vector<long long>
        int r = customers.size();
        int c = customers[0].size();
        long long s = 0;  // Change int to long long

        for (int i = 0; i < r; i++) {
            int a = customers[i][0];
            int t = customers[i][1];  // Move t assignment out of the inner loop
            if (a > s) {
                long long f = static_cast<long long>(a) + t;  // Use long long for f
                s = f;
                long long w = f - a;
                aw.push_back(w);
            } else {
                long long f = s + t;  // Use long long for f
                long long w = f - a;
                s = f;
                aw.push_back(w);
            }
        }
        
        long long p = std::accumulate(aw.begin(), aw.end(), 0LL);  // Use 0LL for long long initial value
        return static_cast<double>(p) / aw.size();        
    }
};
