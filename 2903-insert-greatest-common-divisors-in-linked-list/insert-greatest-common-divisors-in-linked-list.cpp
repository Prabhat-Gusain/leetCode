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
    int GCD(int a, int b){
        return (b)? GCD(b, a%b): a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p=head;
        ListNode* q=p->next;
        if(p==NULL)return head;
        while(q!=NULL)
        {
            ListNode* t=new ListNode;
            t->val=GCD(p->val,q->val);
            t->next=q;
            p->next=t;
            if(p)p=q;
            q=q->next;
        }
        return head;
    }
};