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
    ListNode* middleNode(ListNode* head) {
        ListNode* newNode = head;
        ListNode* res = NULL;
        int cnt = 0, cnt2 = 0;
        while(newNode != NULL){
            newNode = newNode->next;
            cnt++;
        }
        while(head != NULL){
            
            if(cnt / 2 == cnt2){
                newNode = head;
                break;
            }
           
            head = head->next;
            cnt2++;
        }
        return newNode;
    }
};
