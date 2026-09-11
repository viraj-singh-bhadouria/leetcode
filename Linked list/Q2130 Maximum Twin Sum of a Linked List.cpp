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
    int pairSum(ListNode* head) {
        if(head==nullptr) return 0;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=NULL;
        ListNode* nextx;
        ListNode* curr=slow;
        while(curr!=nullptr){
            nextx=curr->next;
            curr->next=fast;
            fast=curr;
            curr=nextx;
        }
        int max=0;
        ListNode* temp=head;
        while(fast!=NULL){
            int sum=temp->val+fast->val;
            max=max>sum?max:sum;
            temp=temp->next;
            fast=fast->next;
        }

        return max;
    }
};