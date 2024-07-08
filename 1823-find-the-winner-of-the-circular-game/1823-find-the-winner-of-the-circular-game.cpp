class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }

        int index = 0;
        while (vec.size() > 1) {
            index = (index + k - 1) % vec.size();
            vec.erase(vec.begin() + index);
        }

        return vec[0];
    }
};