//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//����
//1->4->2, 4->1->3
//���
//1->1->2->3->4->4
#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode*next;
};

ListNode* merge(ListNode*l1, ListNode* l2){
	ListNode*head = nullptr;
	ListNode*tail = nullptr;
	if (l1->val < l2->val){
		head = tail = l1;
	}
	else{
		head = tail = l2;
	}
	while (l1||l2)
	{
		while (l1->val<l2->val)
		{
			tail->next = l1;
			l1 = l1->next;
		}
		while (l1->val>l2->val)
		{
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
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

int main(){
	ListNode*l1
	merge()
}