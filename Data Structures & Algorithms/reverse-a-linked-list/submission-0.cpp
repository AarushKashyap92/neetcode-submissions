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
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* p = head;
        ListNode* c = p->next;
        ListNode* n = c->next;

        p->next = NULL;

        while(c != NULL){
            c->next = p;
            p = c;
            c = n;
            if(n != NULL){
                n = n->next;
            }
        }
        return p;
    }
};
