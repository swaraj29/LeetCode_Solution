class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        string p = "";
        int k = num;

        if (k < 0) {
            k = -k;
        }
        while (k > 0) {
            int r = k % 7;
            p = to_string(r) + p;
            k = k / 7;
        }
        if (num < 0) {
            p = "-" + p;
        }
        return p;
    }
};
