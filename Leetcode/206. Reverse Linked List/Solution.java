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
    public ListNode reverseList(ListNode head) {
        ListNode curNode=head;
        while (curNode!=null && curNode.next!=null){
            ListNode nextNode=curNode.next;
            curNode.next=nextNode.next;
            nextNode.next=head;
            head=nextNode;
        }
        return head;
    }
}