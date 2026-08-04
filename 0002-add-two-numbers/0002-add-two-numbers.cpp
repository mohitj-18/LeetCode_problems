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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newnode = new ListNode(0);
        int carry =0;
        ListNode* dumy = newnode;
        while(l1 != NULL || l2 != NULL || carry){
            int sum = carry;
            if(l1 != NULL){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            int p = sum%10;
            dumy->next = new ListNode(sum % 10);
            dumy = dumy->next;
        }
        return newnode->next;
    }
};