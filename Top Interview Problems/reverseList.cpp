// 13. link : [ https://leetcode.com/problems/validate-binary-search-tree ]


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
        if(head == NULL)
            return NULL;
        
        ListNode* res = NULL;
        
        
        while(head){
            ListNode* node = new ListNode(head->val);
            node->next = res;
            res = node;
            head = head -> next;
        }
        
        return res;
    }
};