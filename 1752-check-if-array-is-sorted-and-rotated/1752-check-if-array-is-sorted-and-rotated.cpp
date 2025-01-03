class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());
        
        for (int i = 0; i < nums.size(); i++) {
            vector<int> ro;
            // First add elements from index `i` to the end of the array
            for (int j = i; j < nums.size(); j++) {
                ro.push_back(vec[j]);
            }
            // Then add elements from the beginning to index `i`
            for (int j = 0; j < i; j++) {
                ro.push_back(vec[j]);
            }

            // Compare the rotated array with the original array
            if (ro == nums) {
                return true;
            }
        }
        return false;
    }
};
