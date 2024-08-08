class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n = s.size();
        int time = 0;

        bool swapped = true;
        while (swapped) {
            swapped = false;
            for(int i = 0; i < n - 1; i++){
                if(s[i] == '0' && s[i + 1] == '1'){
                    s[i] = '1';
                    s[i+1] = '0';
                    swapped = true;
                    i++;
                }
            }
            if (swapped) {
                time++;
            }
        }

        return time;
    }
};
