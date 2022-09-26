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
        if(head == NULL)
            return head;
        ListNode *Extra = new ListNode(0);
        Extra->next = head;
        ListNode *previous = Extra;
        ListNode *current = head;
        while(current != NULL){
            if(current->val == val){
                previous->next = current->next;
                current = previous->next;
            }
            else{
                previous = previous->next;;
                current = current->next;
          }
             
        }
        return Extra->next;
    }
};
