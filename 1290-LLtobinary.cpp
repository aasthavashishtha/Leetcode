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

    int number(ListNode* head ,int *power ){
        if(head->next == NULL)
            return (head->val);
        int ans = number(head->next , power) ;
        *power = (*power)*2  ;
        return ans + ((*power)*head->val);
    }
    int getDecimalValue(ListNode* head) {
        int power = 1;
        return number(head, &power);
    }
};