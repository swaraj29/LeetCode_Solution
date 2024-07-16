class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(candyType[i]);
        }
        int maxDifferentCandies = s.size();
        return min(maxDifferentCandies, n / 2);
    }
};
