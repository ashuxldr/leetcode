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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int c = 0;
        ListNode* curr = head;
        while(curr != NULL){
            curr = curr->next;
            ++c;
        }
        if(c==1)
            return nullptr;
        c = c-n;
        if(c==0)
        {
            ListNode * x = head;
            head = head->next;
            delete x;
            return head;
        }
        ListNode* itr = head;
        ListNode* prev = NULL;
        while(c--){
            prev = itr;
            itr=itr->next;
        }
        prev->next = itr->next;
        delete itr;
        return head;
    }
};