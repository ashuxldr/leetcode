class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

    if(k==0 || head == NULL||head->next == NULL) return head;
    ListNode* temp = head;
    int length = 1;
    
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    
    temp->next = head;
    k = k%length;
    int end = length-k;
    
    while(end--) temp = temp->next;

    head = temp->next;
    temp->next = NULL;
        
    return head;
}
};