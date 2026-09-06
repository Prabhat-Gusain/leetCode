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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head->next;
        ListNode* dummyPtr = new ListNode(0);
        ListNode* tail=dummyPtr;
        int sum=0;

        while(p!=NULL)
        {
            if(p->val==0)
            {
                ListNode* q=new ListNode(sum);
                tail->next=q;
                tail=q;
                sum=0;
                p=p->next;

            }
            else
            {
                sum+=p->val;
                p=p->next;
            }
        }
        return dummyPtr->next;
    }
};