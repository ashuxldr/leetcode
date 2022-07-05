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
        int c = 0;
        ListNode* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
            ++c;
        }
        c = c%2 ? c/2+1 : c/2;
        ListNode* itr = head;
        while(c-- > 0){
        itr = itr->next;
        }
        return itr;
    }
};