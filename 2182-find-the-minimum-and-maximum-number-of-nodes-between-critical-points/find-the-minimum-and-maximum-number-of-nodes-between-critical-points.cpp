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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>arr={-1,-1};
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        {
            return arr;
        }
        ListNode* p=head;
        ListNode* q=p->next;
        ListNode* r=p->next->next;
        int minDistance=INT_MAX;
        int maxDistance=0;
        int first=-1;
        int prev=-1;
        int index=2;

        while(r!=NULL)
        {
            if((q->val>p->val && q->val>r->val)||(q->val<p->val &&  q->val<r->val))
            {
                if(first==-1)
                {
                    first=index;
                    prev=index;
                }
                else
                {
                    minDistance=min(minDistance,index-prev);
                    prev=index;
                }
                index++;
                r=r->next;
                q=q->next;
                p=p->next;
            }
            else
            {
                index++;
                r=r->next;
                q=q->next;
                p=p->next;
            }
        }
        if(minDistance == INT_MAX)
        {
            return arr;
        }
        maxDistance=prev-first;
        arr[0]=minDistance;
        arr[1]=maxDistance;
        return arr;
    }
};