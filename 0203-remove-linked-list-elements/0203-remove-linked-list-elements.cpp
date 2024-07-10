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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node to handle cases where the head itself needs to be removed
        ListNode* x = new ListNode(0);
        x->next = head;  // Connect the dummy node to the original head
        ListNode* prev = x;  // Pointer to track the node before the current node
        ListNode* current = head;  // Pointer to iterate through the list
        
        // Traverse the list
        while (current != nullptr) {
            if (current->val == val) {
                prev->next = current->next;
                delete current;
            } else {
                prev = current;
            }
            current = prev->next;
        }
        
        ListNode* newHead = x->next;
        delete x;
        return newHead;
    }
};

