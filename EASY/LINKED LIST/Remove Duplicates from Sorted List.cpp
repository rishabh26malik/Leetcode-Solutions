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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode *tmp=head, *node;
        while(tmp->next != NULL){
            if(tmp->next->val == tmp->val ){
                node=tmp->next;
                while(node && node->val == tmp->val)
                    node=node->next;
                tmp->next=node;
            }
            else
                tmp=tmp->next;
        }
        return head;
    }
};