class Solution {
public:
    ListNode* addTwo(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry == 1){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode *node = new ListNode(sum % 10);
            curr->next = node;
            curr = curr->next;
        }
        return dummy->next;
    }
    ListNode* rev(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* nextP=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextP;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1=rev(l1);
        ListNode* c2=rev(l2);
        return rev(addTwo(c1,c2));
    }
};