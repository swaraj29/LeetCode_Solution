class Solution {
public:
    int minimumSum(int num) {
        
        string p1 = "";
        string p2 = "";
        string c = to_string(num);
        int k = c.size();
        sort(c.begin(),c.end());
        for (int i = 0; i < k; i++) {
            if (i % 2 == 0) {
                p1 += c[i];
            } else {
                p2 += c[i];
            }
        }
        
        return stoi(p1) + stoi(p2);
    }
};
