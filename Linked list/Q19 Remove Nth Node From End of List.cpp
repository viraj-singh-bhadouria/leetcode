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
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        ListNode* prev;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int target=count-n;
        if (target == 0) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }
        temp=head;
        for(int i=0;i<target;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};