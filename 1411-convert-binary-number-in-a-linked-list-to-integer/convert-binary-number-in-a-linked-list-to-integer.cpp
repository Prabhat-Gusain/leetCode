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
    int getDecimalValue(ListNode* head) {
        ListNode* p=head;
        vector<int>arr;
        while(p!=NULL)
        {
            arr.push_back(p->val);
            p=p->next;
        }
        int result=0;
        for(int i=0;i<arr.size();i++)
        {
            result=result*2+arr[i];
        }
        return result;
    }
};