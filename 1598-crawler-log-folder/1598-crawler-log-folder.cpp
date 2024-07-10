class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level = 0;

        for (auto i : logs) {
            if (i == "../") {
                if (level != 0) {
                    level--;
                }
            } else if (i == "./") {
                continue;
            } else {
                level++;
            }
        }

        return level;
    }
};
