int removeElement(int* nums, int numsSize, int val){
	if (numsSize == 0)
		return 0;
	int src = 0, dest = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dest] = nums[src];
			src++;
			dest++;
		}
		else
			src++;
	}
	return dest;
}




int removeDuplicates(int* nums, int numsSize){
	if (numsSize == 0)
		return 0;
	int prev = 0, cur = 1, dest = 0;
	while (cur < numsSize)
	{
		if (nums[prev] != nums[cur])
		{
			nums[dest] = nums[prev];
			prev++;
			cur++;
			dest++;
		}
		else
		{
			prev++;
			cur++;
		}
	}
	nums[dest] = nums[prev];
	dest++;
	return dest;
}


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int* tmp = (int*)malloc(sizeof(int)*(m + n));
	int i = 0, i1 = 0, i2 = 0;
	while (i1 < m&&i2 < n)
	{
		if (nums1[i1] < nums2[i2])
		{
			tmp[i] = nums1[i1];
			i++;
			i1++;
		}
		else
		{
			tmp[i] = nums2[i2];
			i++;
			i2++;
		}
	}
	while (i1 < m)
	{
		tmp[i] = nums1[i1];
		i++;
		i1++;
	}
	while (i2 < n)
	{
		tmp[i] = nums2[i2];
		i++;
		i2++;
	}
	memcpy(nums1, tmp, sizeof(int)*(m + n));
	free(tmp);
}



void Reverse(int*nums, int left, int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}
void rotate(int* nums, int numsSize, int k){
	k %= numsSize;
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
}



struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode*prev = NULL, *cur = head;
	while (cur)
	{
		if (cur->val == val)
		{
			if (cur == head)
			{
				head = cur->next;
				free(cur);
				cur = head;
			}
			else
			{
				prev->next = cur->next;
				free(cur);
				cur = prev->next;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}



struct ListNode* reverseList(struct ListNode* head){
	struct ListNode*newhead = NULL, *cur = head;
	while (cur)
	{
		struct ListNode*next = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}

struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*n1 = NULL, *n2 = head, *n3 = head->next;
	while (n2)
	{
		//Äæ·½Ïò
		n2->next = n1;
		//µü´ú
		n1 = n2;
		n2 = n3;
		if (n3)
			n3 = n3->next;
	}
	return n1;
}



struct ListNode* middleNode(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*slow = head, *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}



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

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	struct ListNode*head = NULL, *tail = NULL;
	if (l1->val < l2->val)
	{
		head = tail = l1;
		l1 = l1->next;
	}
	else
	{
		head = tail = l2;
		l2 = l2->next;
	}
	while (l1&&l2)
	{
		if (l1->val < l2->val)
		{
			tail->next = l1;
			l1 = l1->next;
			tail = tail->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
			tail = tail->next;
		}
	}
	while (l1)
	{
		tail->next = l1;
		l1 = l1->next;
		tail = tail->next;
	}
	while (l2)
	{
		tail->next = l2;
		l2 = l2->next;
		tail = tail->next;
	}
	return head;
}


class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode*lesshead = NULL, *lesstail = NULL;
		ListNode*greaterhead = NULL, *greatertail = NULL;
		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
		//lesshead->next=greaterhead->next=NULL;
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
		greatertail->next = NULL;
		ListNode*list = lesshead->next;
		free(lesshead);
		free(greaterhead);
		return list;
	}
};



class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		ListNode*lesshead = NULL, *lesstail = NULL;
		ListNode*greaterhead = NULL, *greatertail = NULL;
		lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
		greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
		lesshead->next = greaterhead->next = NULL;
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
		greatertail->next = NULL;
		ListNode*list = lesshead->next;
		free(lesshead);
		free(greaterhead);
		return list;
	}
};