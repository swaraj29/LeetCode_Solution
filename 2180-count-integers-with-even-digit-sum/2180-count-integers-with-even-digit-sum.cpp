class Solution {
public:
    int countEven(int num) {
        int c = 0;
        
        int i = 1;
        while (i < 10 && i <= num) {
            if (i % 2 == 0) {
                c++;
            }
            i++;
        }

        while (i >= 10 && i < 100 && i <= num) {
            int a = i / 10;
            int b = i % 10;

            if ((a + b) % 2 == 0) {
                c++;
            }
            i++;
        }

        while (i >= 100 && i < 1000 && i <= num) {
            int d = i % 10;
            int e = (i / 10) % 10;
            int f = (i / 100) % 10;

            if ((d + e + f) % 2 == 0) {
                c++;
            }
            i++;
        }

        return c;
    }
};
