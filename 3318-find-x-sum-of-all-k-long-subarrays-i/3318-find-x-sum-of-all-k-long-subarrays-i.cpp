class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> vec;

        for(int i = 0; i <= n - k; i++) {  // Ensure valid subarray
            unordered_map<int, int> mp;

            // Count frequencies for the subarray [i..i+k-1]
            for(int j = i; j < i + k; j++) {
                mp[nums[j]]++;
            }

            // Create vector of pairs (frequency, value)
            vector<pair<int, int>> freqVec;
            for(auto it : mp) {
                freqVec.push_back({it.second, it.first});
            }

            // Sort by frequency in descending order; break ties by value in descending order
            sort(freqVec.rbegin(), freqVec.rend());

            // Sum the top x frequent elements
            int sum = 0;
            for(int idx = 0; idx < x && idx < freqVec.size(); idx++) {
                sum += freqVec[idx].first * freqVec[idx].second;
            }

            vec.push_back(sum);
        }

        return vec;
    }
};
