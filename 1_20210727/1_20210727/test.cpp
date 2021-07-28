class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == nullptr){
			return nullptr;
		}
		ListNode*cur = pHead;
		ListNode*next = cur->next;
		//ListNode*next=nullptr;//也可，因为进入while循环后next要进行赋值
		ListNode*newhead = nullptr;
		while (cur){
			next = cur->next;//记录位置，保存cur的下一个节点
			cur->next = newhead;//头插
			newhead = cur;//把cur拿下来
			cur = next;//cur迭代
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
			next = cur->next;//用来保存cur的下一个位置
			cur->next = newhead;//头插
			newhead = cur;//把cur拿下来
			cur = next;//cur迭代
		}
		return newhead;
	}
};