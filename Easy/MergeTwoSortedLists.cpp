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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* NewListHead = NULL;
        ListNode* NewList = NULL;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        if(list1 == NULL && list2 == NULL)
            return NewList;
        else if(list1 != NULL && list2 == NULL)
            return list1;
        else if(list1 == NULL && list2 != NULL)
            return list2;
        
        if(list1->val <= list2->val){
            ListNode* temp = new ListNode(list1->val);
            NewListHead = temp;
            list1 = list1 -> next;
        }else{
            ListNode* temp = new ListNode(list2->val);
            NewListHead = temp;
            list2 = list2 -> next;
        }
        NewList = NewListHead;
        while(list1 != NULL && list2 != NULL){
            if(list1 -> val <= list2 -> val){
                ListNode* temp = new ListNode(list1->val);
                NewList->next = temp;
                list1 = list1 -> next;

            }else if(list1 -> val > list2 -> val){
                ListNode* temp = new ListNode(list2->val);
                NewList->next = temp;
                list2 = list2 -> next;
            }
            NewList =  NewList->next;
        }
        if(list1 != NULL){
            NewList->next = list1;
        }else if(list2 != NULL){
            NewList->next = list2;
        }
        return NewListHead;
    }
};
