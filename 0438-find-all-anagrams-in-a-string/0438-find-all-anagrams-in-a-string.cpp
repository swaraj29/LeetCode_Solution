class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> result;
        unordered_map<char, int> mp, ms;

        // Build frequency map for characters in p
        for (char &c : p) {
            mp[c]++;
        }

        // Iterate over all possible starting positions of substrings in s
        for (int i = 0; i <= n - m; i++) {
            ms.clear();
            // Build frequency map for the current substring
            for (int j = i; j < i + m; j++) {
                ms[s[j]]++;
            }

            // Compare frequency maps
            if (mp == ms) {
                result.push_back(i);
            }
        }

        return result;
    }
};
