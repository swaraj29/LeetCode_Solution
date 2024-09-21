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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode*curr = head;
        int size = 0;

        while(curr != NULL){
            curr = curr -> next;
            size++;
        }
        ListNode* prev = head;
        ListNode* n = head;
        for(int i = 1; i < k; i++){
            prev = prev->next;  
        }
        int count = size - k;
        for(int i = 1; i <= count; i++){
            n = n->next; 
        }
        swap(prev->val, n->val);
        return head;
    }
};