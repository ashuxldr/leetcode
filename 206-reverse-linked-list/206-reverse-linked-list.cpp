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
        ListNode* itr = head;
        ListNode* temp;

        ListNode* rev = nullptr;
        while(itr){
            temp = itr->next;
            itr->next = rev;
            rev = itr;
            itr = temp;
        }
        return rev;
    }
};