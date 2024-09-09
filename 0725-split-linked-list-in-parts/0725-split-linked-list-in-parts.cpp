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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> vec(k);
        ListNode* curr = head;
        int size = 0;
        while(curr != NULL){
            size++;
            curr = curr->next;
        }
        curr = head;
        int d = size/k;
        int r = size % k;

        for(int i = 0; i < k; i++){
            int q = d + (r-- > 0 ? 1 : 0);
            vec[i] = curr;
            for(int j = 1; j < q; j++){
                curr = curr->next;
            }
            if(curr) {
                ListNode* Node = curr->next;
                curr->next = NULL;
                curr = Node;
            }

        }
        return vec;
    }
};