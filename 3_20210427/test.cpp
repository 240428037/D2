#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int C = (d - b) / 2;
	int B1 = (b + d) / 2;
	int B2 = (c - a) / 2;
	if (B1 == B2)
		cout << A << " " << B1 << " " << C;
	else
		cout << "No";
	return 0;
}




#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s, table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	bool flag = false;
	if (m < 0)
	{
		m = -m;
		flag = true;
	}
	while (m)
	{
		s += table[m%n];
		m /= n;
	}
	if (flag)
		s += '-';
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}




int* addToArrayForm(int* num, int numSize, int k, int* returnSize){
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
	int nextnum = 0;
	while (len--)
	{
		int a = 0;
		if (i >= 0)
		{
			a = num[i];
			i--;
		}
		int ret = a + k % 10 + nextnum;
		k /= 10;
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
	int left = 0, right = reti - 1;
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	*returnSize = reti;
	return retArr;
}



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
				//while(cur->val==next->val)
				//12333
				while (next&&cur->val == next->val)
					next = next->next;
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



class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        ListNode*lesshead, *lesstail;
        ListNode*greaterhead, *greatertail;
        lesshead = lesstail = (ListNode*)malloc(sizeof(ListNode));
        greaterhead = greatertail = (ListNode*)malloc(sizeof(ListNode));
        lesshead->next=greaterhead->next=NULL;//初始化
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