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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        ListNode*first=head;
        ListNode*last=head;
        int i=1;
        while(i!=k){
            first=first->next;
            i++;
        }
        i=0;
        while(i!=n-k){
            last=last->next;
            i++;
        }
        swap(first->val,last->val);
        return head;
    }
    
};