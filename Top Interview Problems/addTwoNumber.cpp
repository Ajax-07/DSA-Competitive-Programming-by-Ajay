
// 6. Link : [ https://leetcode.com/problems/add-two-numbers ]

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
        ListNode *result = NULL;
        ListNode *tail = NULL;
        
        int carry = 0;
        
        while (l1 || l2 || carry) {
            int val = carry;
            if (l1) {
                val += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                val += l2->val;
                l2 = l2->next;
            }
            
            if (val >= 10) {
                carry = 1;
                val -= 10;
            } else {
                carry = 0;
            }
            
            if (result == NULL) {
                result = new ListNode();
                tail = result;
                result->val = val;
            } else {
                ListNode *next = new ListNode();
                tail->next = next;
                next->val = val;
                tail = next;
            }
        }
        return result;
    }
};