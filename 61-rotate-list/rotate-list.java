/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null) return head;
        int n=1;
        ListNode temp=head;
        while(temp.next!=null){
            temp=temp.next;
            n++;
        }
        k=k%n;
        int t=n-k;
        ListNode temp2=head;
        for(int i=1;i<t;i++){
            temp2=temp2.next;
        }
        temp.next=head;
        head=temp2.next;
        temp2.next=null;
        return head;
    }
}