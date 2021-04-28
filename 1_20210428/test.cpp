int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
	//计算ksize-len-为retArr开空间和while循环控制
	int ksize = 0;
	int knum = k;
	while (knum)
	{
		ksize++;
		knum /= 10;
	}
	int len = numSize > ksize ? numSize : ksize;
	int*retArr = (int*)malloc(sizeof(int)*(len + 1));
	int i = numSize - 1;
	int reti = 0;
	int nextnum = 0;//进位
	while (len--)
	{
		//防止数组越界
		int a = 0;
		if (i >= 0)
		{
			a = num[i];
			i--;
		}
		int ret = a + k % 10 + nextnum;
		k /= 10;
		//判断进位
		if (ret > 9)
		{
			ret -= 10;
			nextnum = 1;
		}
		else
			nextnum = 0;
		retArr[reti] = ret;
		reti++;
	}
	if (nextnum == 1)
	{
		retArr[reti] = 1;
		reti++;
	}
	//翻转retArr
	int left = 0, right = reti - 1;
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	//返回
	*returnSize = reti;
	return retArr;
}






class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {
		ListNode*slow = A, *fast = A, *prev = NULL;//prev防止链表成环
		while (fast&&fast->next)
		{
			prev = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
		prev->next = NULL;//防止链表成环
		ListNode*newhead = NULL, *cur = slow;
		while (cur)
		{
			ListNode*next = cur->next;
			cur->next = newhead;
			newhead = cur;
			cur = next;
		}
		slow = newhead;
		while (A)
		{
			if (A->val != slow->val)
				return false;
			else
			{
				A = A->next;
				slow = slow->next;
			}
		}
		return true;
	}
};



class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode*lesshead, *lesstail;
		ListNode*greaterhead, *greatertail;
		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
		lesshead->next = greaterhead->next = NULL;//初始化
		ListNode*cur = pHead;
		while (cur)
		{
			if (cur->val < x)
			{
				lesstail->next = cur;
				lesstail = lesstail->next;
				cur = cur->next;
			}
			else
			{
				greatertail->next = cur;
				greatertail = greatertail->next;
				cur = cur->next;
			}
		}
		lesstail->next = greaterhead->next;
		greatertail->next = NULL;//防止链表成环
		ListNode*list = lesshead->next;
		free(lesshead);
		free(greaterhead);
		return list;
	}
};




struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
	struct ListNode*slow = pListHead, *fast = pListHead;
	while (k--)
	{
		if (fast)
			fast = fast->next;
		else
			return NULL;
	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}



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



class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode*lesshead, *lesstail;
		ListNode*greaterhead, *greatertail;
		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
		lesshead->next = greaterhead->next = NULL;//初始化
		ListNode*cur = pHead;
		while (cur)
		{
			if (cur->val < x)
			{
				lesstail->next = cur;
				lesstail = lesstail->next;
				cur = cur->next;
			}
			else
			{
				greatertail->next = cur;
				greatertail = greatertail->next;
				cur = cur->next;
			}
		}
		lesstail->next = greaterhead->next;
		greatertail->next = NULL;//防止链表成环
		ListNode*list = lesshead->next;
		free(lesshead);
		free(greaterhead);
		return list;
	}
};



class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		ListNode*prev = NULL, *cur = pHead, *next = cur->next;
		while (next)
		{
			if (cur->val != next->val)
			{
				prev = cur;
				cur = next;
				next = next->next;
			}
			else
			{
				//
				//while(cur->val==next->val)
				//12333
				while (next&&cur->val == next->val)
					next = next->next;
				//
				//prev->next=next;
				//11134
				if (prev)
					prev->next = next;
				else
					pHead = next;
				while (cur != next)
				{
					ListNode*del = cur;
					cur = cur->next;
					free(del);
				}
				//
				//next=cur->next;
				//12333
				if (next)
					next = cur->next;
			}
		}
		return pHead;
	}
};



class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		ListNode*prev = NULL, *cur = pHead, *next = cur->next;
		while (next)
		{
			if (cur->val != next->val)
			{
				prev = cur;
				cur = next;
				next = next->next;
			}
			else
			{
				//next
				//-12333
				while (next&&cur->val == next->val)
					next = next->next;
				//prev
				//-11123
				if (prev)
					prev->next = next;
				else
					pHead = next;
				//cur
				while (cur != next)
				{
					ListNode*del = cur;
					cur = cur->next;
					free(del);
				}
				//next
				//-12333
				if (next)
					next = cur->next;
			}
		}
		return pHead;
	}
};




class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead) {
		if (pHead == NULL || pHead->next == NULL)
			return pHead;
		ListNode*prev = NULL, *cur = pHead, *next = cur->next;
		while (next)
		{
			if (cur->val != next->val)
			{
				prev = cur;
				cur = next;
				next = next->next;
			}
			else
			{
				//next
				//-12333
				while (next&&cur->val == next->val)
					next = next->next;
				//prev
				//-11123
				if (prev)
					prev->next = next;
				else
					pHead = next;
				//cur
				while (cur != next)
				{
					ListNode*del = cur;
					cur = cur->next;
					free(del);
				}
				//next
				//-12333
				if (next)
					next = cur->next;
			}
		}
		return pHead;
	}
};



class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode*lesshead, *lesstail;
		ListNode*greaterhead, *greatertail;
		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
		lesshead->next = greaterhead->next = NULL;//初始化
		ListNode*cur = pHead;
		while (cur)
		{
			if (cur->val < x)
			{
				lesstail->next = cur;
				lesstail = lesstail->next;
				cur = cur->next;
			}
			else
			{
				greatertail->next = cur;
				greatertail = greatertail->next;
				cur = cur->next;
			}
		}
		lesstail->next = greaterhead->next;
		greatertail->next = NULL;//防止链表成环
		ListNode*list = lesshead->next;
		free(lesshead);
		free(greaterhead);
		return list;
	}
};