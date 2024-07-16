class Solution {
public:
    bool leapyear(int n) {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
            return true;
        }
        return false;
    }

    int dayOfYear(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        int sum = 0;

        for (int i = 1; i < m; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                sum += 31;
            } else if (i == 2) {
                if (leapyear(y)) {
                    sum += 29;
                } else {
                    sum += 28;
                }
            } else {
                sum += 30;
            }
        }

        sum += d;

        return sum;
    }
};
