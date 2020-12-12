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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode *tmp,*node;
        tmp=head;
        while(tmp->next!=NULL){
            if(tmp->next->val == val ){
                tmp->next=tmp->next->next;
                //node=tmp->next;
                //while(node->val == val )
                //    node=node->next;
                //tmp->next=node;
            }
            else
                tmp=tmp->next;
        }
        if(head->val==val)
            head=head->next;
        return head;
    }
};