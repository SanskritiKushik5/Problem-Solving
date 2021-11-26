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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *k = new ListNode(0);
        ListNode *solution = k;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                k->next = list1;
                list1 = list1->next;
                k = k->next;
            }
            else{
                k->next = list2;
                list2 = list2->next;
                k = k->next;
            }
        }
        if(list1 == NULL)
            k->next = list2;
        if(list2 == NULL)
            k->next = list1;
        
        return solution->next;
    }
};
