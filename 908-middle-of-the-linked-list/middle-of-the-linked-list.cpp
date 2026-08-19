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
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head;
        ListNode *q=head;
        int length=0;
        while(p!=NULL)
        {
            length++;
            p=p->next;
        }
        int mid=length/2;
        for(int i=0;i<mid;i++)
        {
            q=q->next;
        }
        return q;
    }
};