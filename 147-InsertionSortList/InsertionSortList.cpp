/*
Runtime: 16 ms, faster than 98.65% of C++ online submissions for Insertion Sort List.
Memory Usage: 9.7 MB, less than 48.15% of C++ online submissions for Insertion Sort List.
*/
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* st = new ListNode(0);
        st -> next = head;
        ListNode* pre = st ; 
        ListNode* cur = head;
        while(cur)
        {
            if(cur->next && (cur->val > cur->next->val))
            {
                while(pre->next && (pre->next->val < cur->next->val))
                    pre = pre->next;
                ListNode* temp = pre->next;
                pre->next = cur->next;
                cur->next = cur->next->next;
                pre->next->next = temp;
                pre = st;
            }
            else
                cur = cur->next;
        }
        return st -> next;
    }
};
