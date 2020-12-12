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
    ListNode *getIntersectionNode(ListNode *listA, ListNode *listB) {
        ListNode *listAA=listA;
        while(listA){
            listA->val *=-1;
            listA=listA->next;
        }
        while(listB){
            if(listB->val < 0){
                listB->val *=1;
                while(listAA){
                   listAA->val *=-1;
                    listAA=listAA->next;
                }
                return listB;
            }
                
            listB=listB->next;
        }
        while(listAA){
                   listAA->val *=-1;
                    listAA=listAA->next;
                }
        return NULL;
    }
};