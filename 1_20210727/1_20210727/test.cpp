class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == nullptr){
			return nullptr;
		}
		ListNode*cur = pHead;
		ListNode*next = cur->next;
		//ListNode*next=nullptr;//Ҳ�ɣ���Ϊ����whileѭ����nextҪ���и�ֵ
		ListNode*newhead = nullptr;
		while (cur){
			next = cur->next;//��¼λ�ã�����cur����һ���ڵ�
			cur->next = newhead;//ͷ��
			newhead = cur;//��cur������
			cur = next;//cur����
		}
		return newhead;
	}
};


/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		//         if(pHead==nullptr){
		//             return nullptr;
		//         }
		//         ListNode*n1=nullptr;
		//         ListNode*n2=pHead;
		//         ListNode*n3=pHead->next;
		//         while(n2){
		//             n2->next=n1;
		//             n1=n2;
		//             n2=n3;
		//             while(n3){
		//                 n3=n3->next;
		//             }
		//         }
		//         return n1;
		if (pHead == nullptr){
			return nullptr;
		}
		ListNode*cur = pHead;
		ListNode*next = cur->next;
		ListNode*newhead = nullptr;
		while (cur){
			next = cur->next;//��������cur����һ��λ��
			cur->next = newhead;//ͷ��
			newhead = cur;//��cur������
			cur = next;//cur����
		}
		return newhead;
	}
};