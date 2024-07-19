class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> vec(n, 0);
        
        for (int i = 0; i < n; i++) {
            int day = 0;
            
            for (int j = i + 1; j < n; j++) {
                if (temperatures[j] > temperatures[i]) {
                    day = j - i;
                    break;
                }
            }
            
            vec[i] = day;
        }
        
        return vec;
    }
};
