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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*> mp;
        
        // Create a dummy node
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        
        // Initialize the map with the dummy node
        mp[0] = dummyNode;

        while (head != nullptr) {
            prefixSum += head->val;

            if (mp.find(prefixSum) != mp.end()) {
                // Found a zero-sum sublist; perform deletion
                ListNode* start = mp[prefixSum];
                ListNode* temp = start;
                int pSum = prefixSum;

                // Remove all nodes between start and head
                while (temp != head) {
                    temp = temp->next;
                    pSum += temp->val;

                    // Erase contributions from the map
                    if (temp != head) {
                        mp.erase(pSum);
                    }
                }
                // Link the previous node to the node after head
                start->next = head->next;
            } else {
                // Store the current node in the map
                mp[prefixSum] = head;
            }

            // Move to the next node
            head = head->next;
        }

        return dummyNode->next; // Return the new head
    }
};
