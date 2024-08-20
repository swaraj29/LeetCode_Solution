class Solution {
public:
    string reverseWords(string s) {

        // Create a stringstream object from the input string
        stringstream ss(s);
        string token = "";   // To store each word extracted from the string
        string result = ""; // To build the final reversed string
        
        // Extract words from the stringstream one by one
        while (ss >> token) {
            // Prepend the current word to the result
            // Adding a space before appending the word, except for the first word
            result = token + " " + result;
        }
        
        // Remove the trailing space at the end of the result string
        // `substr(0, result.size() - 1)` creates a substring without the last character
        return result.substr(0, result.size() - 1);
    }
};
