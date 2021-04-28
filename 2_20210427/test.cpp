#define _CRT_SECURE_NO_WARNINGS 1


class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		struct ListNode*curA = headA, *curB = headB;
		int la = 0, lb = 0;
		while (curA)
		{
			la++;
			curA = curA->next;
		}
		while (curB)
		{
			lb++;
			curB = curB->next;
		}
		struct ListNode*longlist = headA, *shortlist = headB;
		if (la < lb)
		{
			longlist = headB;
			shortlist = headA;
		}
		int gap = abs(la - lb);
		while (gap--)
		{
			longlist = longlist->next;
		}
		while (longlist)
		{
			if (shortlist == longlist)
				return longlist;
			shortlist = shortlist->next;
			longlist = longlist->next;
		}
		return longlist;
	}
};