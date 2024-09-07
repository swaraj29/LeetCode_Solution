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
    ListNode* reverseList(ListNode* head) {
        
        vector<int> ans;
        ListNode* temp = head;

        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        };

        int n = ans.size() - 1;
        temp = head;

        while(temp != NULL){
            temp->val = ans[n];
            n--;
            temp = temp->next;
        }
        return head;
    }
};