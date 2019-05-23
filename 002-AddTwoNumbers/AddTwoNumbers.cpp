/**
 * ===============Runtime: 20 ms, faster than 98.48% of C++ online submissions for Add Two Numbers.=============
 * ===============Memory Usage: 10.5 MB, less than 63.75% of C++ online submissions for Add Two Numbers.========
 *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode c(0);
        ListNode* p = &c;
        int extra = 0;
        int sum=0;
        while( l1 || l2 || extra)
        {
            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            extra = sum/10;
            p->next = new ListNode(sum%10);
            p = p->next;
            l1 = l1 ? l1->next : 0;
            l2 = l2 ? l2->next : 0;
        }
        return c.next;
    }
};
