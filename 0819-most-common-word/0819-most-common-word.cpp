class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        // Step 1: Convert paragraph to lowercase
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

        // Step 2: Remove punctuation
        for (char& c : paragraph) {
            if (!isalpha(c) && c != ' ') {
                c = ' ';
            }
        }

        // Step 3: Split paragraph into words
        stringstream ss(paragraph);
        string word;
        unordered_map<string, int> freq;

        while (ss >> word) {
            // Step 4: Count frequency of each word
            if (find(banned.begin(), banned.end(), word) == banned.end()) {
                freq[word]++;
            }
        }

        // Step 5: Find the most frequent word
        string mostCommon;
        int maxFreq = 0;
        for (auto& pair : freq) {
            if (pair.second > maxFreq) {
                maxFreq = pair.second;
                mostCommon = pair.first;
            }
        }

        return mostCommon;
    }
};
