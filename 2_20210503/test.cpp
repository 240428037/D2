bool hasCycle(struct ListNode *head) {
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return true;
	}
	return false;
}



struct ListNode *detectCycle(struct ListNode *head) {
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (fast == NULL || fast->next == NULL)
		return NULL;
	struct ListNode*meet = fast;
	while (head != meet)
	{
		head = head->next;
		meet = meet->next;
	}
	return meet;
}