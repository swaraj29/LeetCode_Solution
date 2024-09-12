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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> vec;
        ListNode* curr = head;
        int size = 0;
        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        int n = vec.size();
        vector<int> temp(n);

        for(int i = 0; i < n; i++){
            temp[(i + k) % n] = vec[i];
        }

        curr = head;

        for(int i = 0; i < n; i++){
            curr-> val = temp[i];
            curr = curr->next;
        }

        curr = head;
        return curr;


    }
};