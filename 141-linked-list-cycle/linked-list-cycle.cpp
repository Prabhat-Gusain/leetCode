/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* p,* q;
        p=head;
        q=head;

        if(head == NULL || head->next == NULL) {
            return false;
        }

        do
        {
            p=p->next;
            q=q->next;

            if(q!=NULL)
            {
                q=q->next;
            }
        }while(p!=NULL && q!=NULL && p!=q);
        if(p==q && p!=NULL && q!=NULL)
        {
            return true;
        }
        return false;
    }
};