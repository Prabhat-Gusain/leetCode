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
        ListNode* p=head;
        ListNode* q=NULL;

        int length=0;
        while(p!=NULL)
        {
            length++;
            p=p->next;
        }
        if(length<2)return NULL;
        int index=length-n;
        p=head;
        if(index==0)
        {
            head=head->next;
            delete p;
            return head;
        }
        for(int i=0;i<index;i++)
        {
            q=p;
            p=p->next;
        }

        q->next=p->next;
        delete p;

        return head;


    }
};