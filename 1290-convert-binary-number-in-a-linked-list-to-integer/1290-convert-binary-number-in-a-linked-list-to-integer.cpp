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

    int p(int x)
    {
        if(x == 0)
        {
            return 1;
        }
        int co = 1;
        for(int i = 1; i <=x; i++)
        {
            co *= 2;
        }
        return co;
    }


public:
    int getDecimalValue(ListNode* head) {

        int s = -1;
        int t = 0;   //  // Variable to store the total decimal value
        ListNode *current = head;

        // Calculate the length of the linked list.
        while(current != nullptr)
        {
            s++;
            current = current->next;
        }

        ListNode * temp = head;  // // Pointer used to iterate through the linked list

        // Iterate through the linked list.
        for(int i = 0; i <= s; i++)
        {
            if(temp->val == 1)
            {
                t += p(s-i);
            }
            temp = temp->next;
        }
        return t;
        
    }
};