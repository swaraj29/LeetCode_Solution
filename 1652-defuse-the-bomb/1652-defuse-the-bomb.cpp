class Solution {
public:
    std::vector<int> decrypt(std::vector<int>& code, int k) {

        int n = code.size();
        std::vector<int> result(n, 0);

        // Case when k is 0: return result filled with zeros
        if (k == 0) {
            return result;
        }

        // Extend the code array to handle circular references
        vector<int> vec = code;
        vec.insert(vec.end(), code.begin(), code.end());

        if (k > 0) {
            // Sum the next k elements for each position
            for (int i = 0; i < n; i++) {
                result[i] = std::accumulate(vec.begin() + i + 1, vec.begin() + i + k + 1, 0);
            }
        } else {
            // Sum the previous |k| elements for each position
            for (int i = 0; i < n; i++) {
                result[i] = std::accumulate(vec.begin() + n + i + k, vec.begin() + n + i, 0);
            }
        }

        return result;
    }
};
