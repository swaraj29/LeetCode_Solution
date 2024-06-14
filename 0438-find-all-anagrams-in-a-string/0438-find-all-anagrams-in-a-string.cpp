class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // Initialize the frequency array for characters in p
        vector<int> arr(26, 0);
        
        // Get the lengths of the strings s and p
        int m = s.size();
        int n = p.size();
        
        // Populate the frequency array with counts of characters in p
        for(char &ch : p) {
            arr[ch - 'a']++;
        }
        
        // Initialize pointers and the result vector
        int i = 0, j = 0;
        vector<int> result;
        
        // Sliding window over string s
        while(j < m) {
            // Decrease the frequency of the current character in the window
            arr[s[j] - 'a']--;
            
            // Check if the window size matches the length of p
            if(j - i + 1 == n) {
                // If all frequencies are zero, it's an anagram
                if(arr == vector<int>(26, 0)) {
                    result.push_back(i);
                }
                
                // Restore the frequency of the character at the start of the window
                arr[s[i] - 'a']++;
                // Move the start of the window to the right
                i++;
            }
            // Move the end of the window to the right
            j++;
        }
        
        // Return the result vector containing starting indices of anagrams
        return result;
    }
};
