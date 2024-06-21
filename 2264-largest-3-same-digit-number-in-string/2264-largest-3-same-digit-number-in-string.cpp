class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        vector<pair<int, string>> vec; 
        // Iterate through num to find all good integers of length 3
        for(int i = 0; i < n - 2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                string goodInteger = num.substr(i, 3);
                vec.push_back({num[i] - '0', goodInteger});
                i += 2; // Skip to the next character after the current good integer
            }
        }
        if (vec.empty()) {
            return ""; // Return an empty string if no good integers are found
        }
        sort(vec.begin(), vec.end());
        return vec[vec.size() - 1].second; // Return the largest good integer string
    }
};
