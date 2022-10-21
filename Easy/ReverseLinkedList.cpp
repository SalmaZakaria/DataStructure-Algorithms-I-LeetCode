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
        ListNode* NewListNext = NULL;
        ListNode* NewListPrev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            NewListNext = temp->next;
            temp->next = NewListPrev;
            NewListPrev = temp;
            temp = NewListNext;
        }
        return NewListPrev;
    }
};
