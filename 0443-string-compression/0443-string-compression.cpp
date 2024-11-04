class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;  // Position to write in chars
        int i = 0;  // Pointer to traverse chars

        while (i < chars.size()) {
            char currentChar = chars[i];
            int count = 0;

            // Count the occurrences of the current character
            while (i < chars.size() && chars[i] == currentChar) {
                i++;
                count++;
            }

            // Write the character to the chars array
            chars[index++] = currentChar;

            // Write the count if it's more than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }
        }

        return index;  // The new length of the compressed string
    }
};
