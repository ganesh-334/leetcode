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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=1;
        if(head==nullptr) return head;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            n++;
            temp=temp->next;
        }
        k=k%n;
        int t=n-k;
        ListNode* temp2=head;
        for(int i=1;i<t;i++){
            temp2=temp2->next;
        }
        temp->next=head;
        ListNode* headt=head;
        head=temp2->next;
        temp2->next=nullptr;
        return head;
    }
};