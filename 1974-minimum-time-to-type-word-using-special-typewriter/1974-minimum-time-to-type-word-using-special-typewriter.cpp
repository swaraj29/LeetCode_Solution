class Solution {
public:
    int minTimeToType(string word) {
        int totalTime = 0;
        int pos = 0; 

        for (char ch : word) {
            int target = ch - 'a';

            
            int clockDist = abs(target - pos);
            
            int anticDist = 26 - clockDist;

            totalTime += min(clockDist, anticDist) + 1;

            pos = target;
        }

        return totalTime;
    }
};
