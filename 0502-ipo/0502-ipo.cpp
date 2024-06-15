class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();

        vector<pair<int, int>> vec(n);

        for (int i = 0; i < n; i++) {
            vec[i] = {capital[i], profits[i]};
        }

        sort(vec.begin(), vec.end());  // sort based on capital

        int i = 0;
        priority_queue<int> pq;

        while (k--) {
            while (i < n && vec[i].first <= w) {
                pq.push(vec[i].second);
                i++;
            }

            if (!pq.empty()) {
                w += pq.top();
                pq.pop();
            } else {
                break;  // If no projects can be afforded, break the loop
            }
        }

        return w;
    }
};

// steps
// 1.vec ->{{cap,profit}}
// 2.sort based on cap
// 3.iterate over vec and add in heap
// 4.add top value
