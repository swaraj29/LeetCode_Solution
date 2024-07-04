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
//Approach-1 (Time : O(n), Space : O(1))
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
    
        ListNode* ODD  = head;
        ListNode* EVEN = head->next;
        
        ListNode* evenStart = head->next;
        
        while(EVEN != NULL && EVEN->next != NULL) {
            ODD->next  = EVEN->next;
            EVEN->next = EVEN->next->next; //fat sakt hai ye code
            
            ODD  = ODD->next;
            EVEN = EVEN->next;
        }
        ODD->next = evenStart;
        return head;
    }
};

        /*
            Story : 
            1. Hume odd and even ko segregate karna hai
            2. To let's take two pointers to point to ODD and EVEN nodes
            3. Unko alag alag segregate kardenge
            4. Last me connect kardenge odd ko even se
            
        */