class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int maxDist = 0;
        
        int minVal = arrays[0].front();
        int maxVal = arrays[0].back();

        for (int i = 1; i < n; ++i) {
            int currMin = arrays[i].front();
            int currMax = arrays[i].back();

            maxDist = max({maxDist, abs(currMin - maxVal),abs(currMax-minVal)});

            minVal = min(minVal, currMin);
            maxVal = max(maxVal, currMax);
        }

        return maxDist;
    }
};