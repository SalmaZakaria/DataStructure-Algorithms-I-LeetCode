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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> M;
        map<int, int>::iterator it;
        ListNode* NewList = NULL;
        ListNode* NewListHead = NULL;
        while(head != NULL){
            if(M.find(head->val) == M.end()){
                M.insert({head->val, 1});
            }
            head = head->next;
        }
        for(it = M.begin(); it != M.end(); it++){
            ListNode* temp = new ListNode(it->first);
            if(it == M.begin()){
                NewList = temp;
                NewListHead = temp;
                NewList->next = NULL;
            }else{
                NewList->next = temp;
                NewList = temp;
            }
        }
        return NewListHead;
    }
};
