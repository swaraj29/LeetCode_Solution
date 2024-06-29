class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

        vector<vector<int>> vec;

        for (int i = items1.size() - 1; i >= 0; i--) {
            for (int j = items2.size() - 1; j >= 0; j--) {
                if (items1[i][0] == items2[j][0]) {
                    vec.push_back({items1[i][0], items1[i][1] + items2[j][1]}); 
                    items1.erase(items1.begin() + i);
                    items2.erase(items2.begin() + j);
                    break; // After erasing, break to avoid out-of-bounds access
                }
            }
        }

        if (!items1.empty()) {
            vec.insert(vec.end(), items1.begin(), items1.end()); // Insert remaining items from items1
        }

        if (!items2.empty()) {
            vec.insert(vec.end(), items2.begin(), items2.end()); // Insert remaining items from items2
        }

        sort(vec.begin(), vec.end());
        return vec;
    }
};
