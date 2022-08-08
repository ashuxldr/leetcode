/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> m;
        while(head){
            if(m.find(head)==m.end())
                m[head]=1;
            else
                return head;
            head=head->next;
        }
        return NULL;
    }
};