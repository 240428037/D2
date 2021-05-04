/**
* Definition for a Node.
* struct Node {
*     int val;
*     struct Node *next;
*     struct Node *random;
* };
*/

struct Node* copyRandomList(struct Node* head) {
	//1.拷贝结点，链接到原结点后面
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
	//2.处理一下拷贝结点的random
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
	//3.拆解出复制链表-3个指针
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
		//cur插入到sorthead链表中并且有序
		//1.头插
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		//2.中间插
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
	//断开-置空
	sorthead->next = NULL;
	while (cur)
	{
		struct ListNode*next = cur->next;
		//cur插入到sorthead链表中并且保持有序
		//1.头插
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		//中间插尾插-sortprev,sortcur;
		//2.中间插
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
			//3.尾插
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
			//头插
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		else
		{
			struct ListNode*sortprev = sorthead, *sortcur = sorthead->next;
			//中间插
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
			//尾插
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
		//头插
		if (cur->val <= sorthead->val)
		{
			cur->next = sorthead;
			sorthead = cur;
		}
		else
		{
			struct ListNode*sortprev = sorthead, *sortcur = sorthead->next;
			//中间插
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
			//尾插
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
    //1.拷贝结点，链接到原结点后面
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
        cur=next;//迭代  
    }
    //2.处理一下拷贝结点的random
    cur=head;
    while(cur)
    {
        copy=cur->next;//1 11
        if(cur->random)
            copy->random=cur->random->next;
        else
            copy->random=NULL;
        cur=cur->next->next;//迭代
    }
    //3.拆解出复制链表-3个指针
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
	//1.拷贝结点，链接到原结点后面
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
		cur = next;//迭代  
	}
	//2.处理一下拷贝结点的random
	cur = head;
	while (cur)
	{
		copy = cur->next;//1 11
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//迭代
	}
	//3.拆解出复制链表-3个指针
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
	//1.拷贝结点，链接到原结点后面
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
		cur = next;//迭代  
	}
	//2.处理一下拷贝结点的random
	cur = head;
	while (cur)
	{
		struct Node*copy = cur->next;//1 11
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//迭代
	}
	//3.拆解出复制链表-3个指针
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
	//1.拷贝原链表的每一个结点,链接到原结点后面
	//   11      22        33
	//1      2        3
	struct Node*cur = head;//初始化
	while (cur)
	{
		struct Node*copy = (struct Node*)malloc(sizeof(struct Node));
		copy->next = NULL;
		copy->random = NULL;
		copy->val = cur->val;
		struct Node*next = cur->next;//初始化
		copy->next = cur->next;
		cur->next = copy;
		cur = next;//迭代
	}
	//2.处理拷贝结点的random
	cur = head;//初始化
	while (cur)
	{
		struct Node*copy = cur->next;//初始化
		if (cur->random)
			copy->random = cur->random->next;
		else
			copy->random = NULL;
		cur = cur->next->next;//迭代
	}
	//3.把拷贝结点从原链表中拆解出来-3个指针
	//     copy
	//cur        next
	cur = head;//初始化
	struct Node*copyhead = head->next;//保存copyhead
	while (cur)
	{
		struct Node*copy = cur->next;//初始化
		struct Node*next = copy->next;//初始化
		cur->next = next;//断开
		if (next)
			copy->next = next->next;//新链表连下一个结点
		else
			copy->next = NULL;//置空
		cur = next;//迭代
	}
	return copyhead;
}