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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

       ListNode* curr = head;
        ListNode* nextNode = head;

        while (curr != NULL && nextNode != NULL && nextNode->next != NULL) {
            int a = curr->val;
            nextNode = nextNode->next;
            int b = nextNode->val;

            // Calculate GCD of a and b
            int gcdValue = a;
            int temp = b;
            while (temp != 0) {
                int gcdTemp = temp;
                temp = gcdValue % temp;
                gcdValue = gcdTemp;
            }

            // Create a new node with the GCD value
            ListNode* newNode = new ListNode(gcdValue);

            // Insert the new node between curr and curr->next
            newNode->next = curr->next;
            curr->next = newNode;

            // Move curr two steps forward
            curr = newNode->next;
        }

        return head;

    }
};