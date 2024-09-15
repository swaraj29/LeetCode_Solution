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
        
        vector<int> vec;
        ListNode* curr = head;

        while(curr != NULL){
            vec.push_back(curr->val);
            curr = curr->next;
        }

        int i = 0;
        int j = vec.size() - 1;
        bool flag = false;
        while(i < j){
            if(vec[i] == vec[j]){
                flag = true; 
                i++;
                j--;
            }
            else{
                flag = false;
                break;
            }
        }

        return flag ? true : false;  
    }
};