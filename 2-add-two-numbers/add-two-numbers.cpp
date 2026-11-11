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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead=new ListNode(-1);
        ListNode* current=dummyHead;
        ListNode* p=l1;
        ListNode* q=l2;
        int carry=0;
    
        while(p!=NULL ||q!=NULL)
        {   
            int sum=carry;

            if(p)
            {
                sum+=p->val;
            }
            if(q)
            {
                sum+=q->val;
            }
            ListNode* newNode=new ListNode(sum%10);
            carry=sum/10;
            current->next=newNode;
            current=current->next;

            if(p)
            {
                p=p->next;
            }
            if(q)
            {
                q=q->next;
            }
        }
        if(carry)
        {
            ListNode* newNode=new ListNode(carry);
            current->next=newNode;
        }
        return dummyHead->next;
    }
};