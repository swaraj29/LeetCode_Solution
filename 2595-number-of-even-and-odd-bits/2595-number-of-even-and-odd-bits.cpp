class Solution {
public:
    vector<int> evenOddBit(int n) {
        bitset<32> p(n);
        vector<int> vec;
        int odd = 0;
        int even = 0;

        for (int i = 0; i < p.size(); i++) {
            if (i % 2 == 0 && p[i] == 1) {
                even++;
            } else if(i % 2 == 1 && p[i] == 1) {
                odd++;
            }
        }
        
        vec.push_back(even);
        vec.push_back(odd);
        return vec;
    }
};
