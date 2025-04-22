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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next){
            return 0;
        }
        ListNode* i = head;
        ListNode* j = head->next;

        while(j && j->next){
            if(i == j){
                return 1;
            }
            i = i->next;
            j = j->next->next;
        }

        return 0;
    }
};