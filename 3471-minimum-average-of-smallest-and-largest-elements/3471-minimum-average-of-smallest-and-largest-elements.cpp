class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<double> averages;
        
        int i = 0;
        int j = n - 1;
        
        while (i < j) {
            double av = (nums[i] + nums[j]) / 2.0;
            averages.push_back(av);
            i++;
            j--;
        }
        return *min_element(averages.begin(), averages.end());
    }
};
