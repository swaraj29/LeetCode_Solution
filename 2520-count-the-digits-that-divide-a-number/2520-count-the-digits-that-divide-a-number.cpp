class Solution {
public:
    int countDigits(int num) {
        int c = 0;
        int p = num;
        string k = to_string(p);

        for(int i = 0; i < k.size(); i++) {
            int t = stoi(k);
            while(t) {
                int a = t % 10;
                t = t / 10;
                if (a != 0 && p % a == 0) {
                    c++;
                }
            }
            break;
        }
        return c;
    }
};
