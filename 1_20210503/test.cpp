/**
* Definition for a Node.
* struct Node {
*     int val;
*     struct Node *next;
*     struct Node *random;
* };
*/

struct Node* copyRandomList(struct Node* head) {
	//1.������㣬���ӵ�ԭ������
	struct Node*cur = head;
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node*));
		copy->next = NULL;
		copy->random = NULL;
		copy->val = cur->val;
		struct Node*next = cur->next;
		copy->next = next;
		cur->next = copy;
	}
	//2.����һ�¿�������random
	cur = head;
	while (cur)
	{
		copy = cur->next;
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;
	}
	//3.������������-3��ָ��
	cur = head;
	struct Node*copyhead = head->next;
	while (cur)
	{
		struct Node*copy = cur->next;
		struct Node *= copy->next;
		cur->next = next;
		if (next)
			copy->next = next->next;
		else
			copy->next = NULL;
		cur = next;
	}
	return copyhead;
}











/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* insertionSortList(struct ListNode* head){
	if (head == NULL || head->next)
		return head;
	struct ListNode*sorthead = head, *cur = head->next;
	sorthead->next = NULL;
	while (cur)
	{
		struct ListNode*next = cur->next;
		//cur���뵽sorthead�����в�������
		//1.ͷ��
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		//2.�м��
		else
		{
			struct ListNode*sortprev = sorthead, sortcur = sortprev->next;
			while (sortcur)
			{
				if (cur->val <= sortcur->val)
				{
					sortprev->next = cur;
					cur->next = sortcur;
					break;
				}
				else
				{
					sortprev = sortcur;
					sortcur = sortcur->next;
				}
			}
			if (sortcur == NULL)
			{
				sortprev->next = cur;
				cur->next = NULL;
			}
			cur = next;
		}
	}
	return sorthead;
}





/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* insertionSortList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	//sorthead
	//head cur next
	struct ListNode*sorthead = head, *cur = head->next;
	//�Ͽ�-�ÿ�
	sorthead->next = NULL;
	while (cur)
	{
		struct ListNode*next = cur->next;
		//cur���뵽sorthead�����в��ұ�������
		//1.ͷ��
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		//�м��β��-sortprev,sortcur;
		//2.�м��
		else
		{
			struct ListNode*sortprev = sorthead;
			struct ListNode*sortcur = sortprev->next;
			while (sortcur)
			{
				if (cur->val <= sortcur->val)
				{
					sortprev->next = cur;
					cur->next = sortcur;
					break;
				}
				else
				{
					sortprev = sortcur;
					sortcur = sortcur->next;
				}
			}
			//3.β��
			if (sortcur == NULL)
			{
				sortprev->next = cur;
				cur->next = NULL;
			}
		}
		cur = next;
	}
	return sorthead;
}




/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* insertionSortList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*sorthead = head, *cur = head->next;
	sorthead->next = NULL;
	while (cur)
	{
		struct ListNode*next = cur->next
			//ͷ��
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		else
		{
			struct ListNode*sortprev = sorthead, *sortcur = sorthead->next;
			//�м��
			while (sortcur)
			{
				if (cur->val <= sortcur->val)
				{
					sortprev->next = cur;
					cur->next = sortcur;
					break;
				}
				else
				{
					sortprev = sortcur;
					sortcur = sortcur->next;
				}
			}
			//β��
			if (sortcur == NULL)
			{
				sortprev->next = cur;
				cur->next = NULL;
			}
		}
		cur = next;
	}
	return sorthead;
}






struct ListNode* insertionSortList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode*sorthead = head, *cur = head->next;
	sorthead->next = NULL;
	while (cur)
	{
		struct ListNode*next = cur->next;
		//ͷ��
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		else
		{
			struct ListNode*sortprev = sorthead, *sortcur = sorthead->next;
			//�м��
			while (sortcur)
			{
				if (cur->val <= sortcur->val)
				{
					sortprev->next = cur;
					cur->next = sortcur;
					break;
				}
				else
				{
					sortprev = sortcur;
					sortcur = sortcur->next;
				}
			}
			//β��
			if (sortcur == NULL)
			{
				sortprev->next = cur;
				cur->next = NULL;
			}
		}
		cur = next;
	}
	return sorthead;
}




// 11   22   33
//1   2   3 
struct Node* copyRandomList(struct Node* head) {
    if(head==NULL)
        return NULL;
    //1.������㣬���ӵ�ԭ������
	struct Node*cur=head;
    while(cur)
    {
        struct Node*copy=(struct Node*)malloc(sizeof(struct Node));//11 
        copy->next=NULL;//11
        copy->random=NULL;//11
        copy->val=cur->val;//11
        struct Node*next=cur->next;//1 2
        copy->next=next;//11 2
        cur->next=copy;//1 11
        cur=next;//����  
    }
    //2.����һ�¿�������random
    cur=head;
    while(cur)
    {
        copy=cur->next;//1 11
        if(cur->random)
            copy->random=cur->random->next;
        else
            copy->random=NULL;
        cur=cur->next->next;//����
    }
    //3.������������-3��ָ��
    //   copy
    //cur     next
    cur=head;
    struct Node*copyhead=head->next;
    while(cur)
    {
        struct Node*copy=cur->next;
        struct Node*next=copy->next;
        cur->next=next;
        if(next)
            copy->next=next->next;
        else
            copy->next=NULL;
        cur=next;
    }
    return copyhead;
}








// 11   22   33
//1   2   3 
struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	//1.������㣬���ӵ�ԭ������
	struct Node*cur = head;
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node));//11 
		copy->next = NULL;//11
		copy->random = NULL;//11
		copy->val = cur->val;//11
		struct Node*next = cur->next;//1 2
		copy->next = next;//11 2
		cur->next = copy;//1 11
		cur = next;//����  
	}
	//2.����һ�¿�������random
	cur = head;
	while (cur)
	{
		copy = cur->next;//1 11
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//����
	}
	//3.������������-3��ָ��
	//   copy
	//cur     next
	cur = head;
	struct Node*copyhead = head->next;
	while (cur)
	{
		struct Node*copy = cur->next;
		struct Node*next = copy->next;
		cur->next = next;
		if (next)
			copy->next = next->next;
		else
			copy->next = NULL;
		cur = next;
	}
	return copyhead;
}

















// 11   22   33
//1   2   3 
struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	//1.������㣬���ӵ�ԭ������
	struct Node*cur = head;
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node));//11 
		copy->next = NULL;//11
		copy->random = NULL;//11
		copy->val = cur->val;//11
		struct Node*next = cur->next;//1 2
		copy->next = next;//11 2
		cur->next = copy;//1 11
		cur = next;//����  
	}
	//2.����һ�¿�������random
	cur = head;
	while (cur)
	{
		struct Node*copy = cur->next;//1 11
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//����
	}
	//3.������������-3��ָ��
	//   copy
	//cur     next
	cur = head;
	struct Node*copyhead = head->next;
	while (cur)
	{
		struct Node*copy = cur->next;
		struct Node*next = copy->next;
		cur->next = next;
		if (next)
			copy->next = next->next;
		else
			copy->next = NULL;
		cur = next;
	}
	return copyhead;
}




struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	//1.����ԭ�����ÿһ�����,���ӵ�ԭ������
	//   11      22        33
	//1      2        3
	struct Node*cur = head;//��ʼ��
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node));
		copy->next = NULL;
		copy->random = NULL;
		copy->val = cur->val;
		struct Node*next = cur->next;//��ʼ��
		copy->next = cur->next;
		cur->next = copy;
		cur = next;//����
	}
	//2.����������random
	cur = head;//��ʼ��
	while (cur)
	{
		struct Node*copy = cur->next;//��ʼ��
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//����
	}
	//3.�ѿ�������ԭ�����в�����-3��ָ��
	//     copy
	//cur        next
	cur = head;//��ʼ��
	struct Node*copyhead = head->next;//����copyhead
	while (cur)
	{
		struct Node*copy = cur->next;//��ʼ��
		struct Node*next = copy->next;//��ʼ��
		cur->next = next;//�Ͽ�
		if (next)
			copy->next = next->next;//����������һ�����
		else
			copy->next = NULL;//�ÿ�
		cur = next;//����
	}
	return copyhead;
}