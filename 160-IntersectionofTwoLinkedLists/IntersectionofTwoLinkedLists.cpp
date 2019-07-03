/*
Runtime: 52 ms, faster than 74.74% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 16.7 MB, less than 77.61% of C++ online submissions for Intersection of Two Linked Lists.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) 
            return NULL;
        int lenA = query4size(headA), lenB = query4size(headB);
        if (lenA < lenB) 
        {
            for (int i = 0; i < lenB - lenA; ++i) 
                headB = headB->next;
        } 
        else 
        {
            for (int i = 0; i < lenA - lenB; ++i) 
                headA = headA->next;
        }
        while (headA && headB && headA != headB) 
        {
            headA = headA->next;
            headB = headB->next;
        }
        return (headA && headB) ? headA : NULL;
    }
    int query4size(ListNode *head)
    {
        int cnt = 0;
        while (head) {
            ++cnt;
            head = head->next;
        }
        return cnt;
    }
    
};
