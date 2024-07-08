class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c = 0;

        while (low <= high) {
            string k = to_string(low);
            int n = k.size();

            if (n % 2 == 0) {  // Check only numbers with an even number of digits
                int l = 0, r = 0;

                for (int i = 0; i < n / 2; i++) {
                    l += k[i] - '0';
                }
                for (int j = n - 1; j >= n / 2; j--) {
                    r += k[j] - '0';
                }

                if (l == r) {
                    c++;
                }
            }
            low++;
        }
        return c;
    }
};
