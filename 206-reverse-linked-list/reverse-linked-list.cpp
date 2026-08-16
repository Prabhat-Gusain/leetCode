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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* p=head;
        vector<int>arr;
        int i=0;
        while(p!=NULL){
            arr.push_back(p->val);
            p=p->next;
            i++;
        }
        p=head;
        i--;
        while(p!=NULL){
            p->val=arr[i--];
            p=p->next;            
        }
        return head;
    }
};