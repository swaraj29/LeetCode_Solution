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
    bool isPalindrome(ListNode* head) {
        // If the list has only one node, it's always a palindrome
        if (head->next == NULL) {
            return true;
        }

        // Step 1: Calculate the length of the linked list
        ListNode* temp = head;
        int count = 0;
        
        // Traverse the list to count the number of nodes
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        
        // Divide the count by 2 to find the midpoint
        count /= 2;

        // Step 2: Reverse the second half of the list
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        // Traverse the list until the midpoint
        while (count--) {
            prev = curr;
            curr = curr->next;
        }

        // Disconnect the first half from the second half of the list
        prev->next = NULL;

        // Now reverse the second half of the list
        ListNode* front = NULL;
        prev = NULL;
        while (curr) {
            front = curr->next;    // Store the next node
            curr->next = prev;     // Reverse the link
            prev = curr;           // Move prev to the current node
            curr = front;          // Move to the next node in the list
        }

        // Step 3: Compare the first half and the reversed second half
        ListNode* head1 = head; 
        ListNode* head2 = prev;   
        
        // Traverse and compare each node in both halves
        while (head1) {
            if (head1->val != head2->val) {
                return false;     
            }
            head1 = head1->next;  
            head2 = head2->next;  
        }

        // If all values match, return true (it is a palindrome)
        return true;
    }
};
