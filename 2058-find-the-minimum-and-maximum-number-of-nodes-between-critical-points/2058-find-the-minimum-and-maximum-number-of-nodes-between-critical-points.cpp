/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> vec;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        int index = 1;

        // Traverse the list to find the critical points
        while (curr != nullptr && curr->next != nullptr) {
            ListNode* next = curr->next;
            
            if (prev && next) {
                if ((curr->val > prev->val && curr->val > next->val) ||
                    (curr->val < prev->val && curr->val < next->val)) {
                    vec.push_back(index);
                }
            }
            
            prev = curr;
            curr = next;
            index++;
        }

        // If fewer than two critical points, return {-1, -1}
        if (vec.size() < 2) {
            return {-1, -1};
        }

        // Calculate the minimum and maximum distances
        int mindist = INT_MAX;
        int maxdist = vec.back() - vec.front();

        for (int i = 1; i < vec.size(); i++) {
            mindist = min(mindist, vec[i] - vec[i - 1]);
        }

        return {mindist, maxdist};
    }
};
