class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> vec;
        vector<int> remaining;
        int n = arr1.size();

        // Step 1: Add elements to vec in the order of arr2
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (arr2[i] == arr1[j]) {
                    vec.push_back(arr1[j]);
                }
            }
        }

        // Step 2: Add elements not in arr2 to the remaining vector
        for (int j = 0; j < n; j++) {
            bool found = false;
            for (int i = 0; i < arr2.size(); i++) {
                if (arr1[j] == arr2[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                remaining.push_back(arr1[j]);
            }
        }

        // Step 3: Sort the remaining elements
        sort(remaining.begin(), remaining.end());

        // Step 4: Append the sorted remaining elements to the result
        vec.insert(vec.end(), remaining.begin(), remaining.end());

        return vec;
    }
};
