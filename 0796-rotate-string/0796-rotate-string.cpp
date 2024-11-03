class Solution {
public:
    bool rotateString(string s, string goal) {
        // If the lengths are different, `goal` can't be a rotation of `s`
        if (s.size() != goal.size()) {
            return false;
        }

        // Concatenate `s` with itself
        string k = s + s;

        return k.find(goal) != string::npos;
    }
};
