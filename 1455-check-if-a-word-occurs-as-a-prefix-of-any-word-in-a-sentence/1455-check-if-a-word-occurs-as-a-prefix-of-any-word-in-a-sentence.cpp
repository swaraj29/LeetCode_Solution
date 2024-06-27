class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int idx = 1; // 1-indexed position of the word
        int start = 0; // start index of the current word

        for (int i = 0; i <= sentence.size(); i++) {
            if (sentence[i] == ' ' || i == sentence.size()) {
                string word = sentence.substr(start, searchWord.size()); 
                if (word == searchWord) {
                    return idx;
                }
                start = i + 1; // move to the next word
                idx++; // increment word index
            }
        }
        return -1; // searchWord not found as a prefix in any word
    }
};
