//解题思路
//1.迭代-三指针翻转
//while(n2)
//if(n3)
//return n1
//2.头插
//cur
//newhead
//while(cur)
//next
//cur->next=newhead
//newhead=cur
//cur=next
//return newhead
class Solution {
public:
    ListNode* ReverseList(ListNode* head) {
        /*//1.迭代
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*n1=nullptr;
        ListNode*n2=head;
        ListNode*n3=head->next;
        while(n2){
            n2->next=n1;
            n1=n2;
            n2=n3;
            if(n3){
                n3=n3->next;
            }
        }
        return n1;*/
        //2.头插
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*cur=head;
        ListNode*newhead=nullptr;
        while(cur){
            ListNode*next=cur->next;
            cur->next=newhead;
            newhead=cur;
            cur=next;
        }
        return newhead;
    }
};



//测试用例
//1234
//1423
//-
//12345
//15243
//-
//12345
//123/45
//123/54
//15243
//解题思路
//1.快慢指针找到链表的中间节点
//2.从中间节点将链表断开
//3.翻转后半段链表
//4.合并链表
class Solution {
public:
    //反转链表
    ListNode*reverselist(ListNode*head){
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*cur=head;
        ListNode*newhead=nullptr;
        while(cur){
            ListNode*next=cur->next;
            cur->next=newhead;
            newhead=cur;
            cur=next;
        }
        return newhead;
    }
    void reorderList(ListNode *head) {
        if(head==nullptr||head->next==nullptr){
            return;
        }
        //1.快慢指针找到链表的中间节点
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //2.从中间节点将链表断开
        ListNode*tmp=slow->next;
        slow->next=nullptr;//断开
        //3.翻转后半段链表
        ListNode*newhead=reverselist(tmp);
        //3.合并链表
        //head-123
        //newhead-54
        //15243
        ListNode*cur=head;
        int k=0;
        //循环控制条件&&-一个走完就结束
        while(cur&&newhead){
            if(k%2==0){
                ListNode*next=cur->next;
                cur->next=newhead;//链接
                cur=next;
            }else{
                ListNode*next=newhead->next;
                newhead->next=cur;//链接
                newhead=next;
            }
            k++;
        }
        return;
    }
};


//解题思路
//链表判环-快慢指针
//链表环的入口节点-有环一定有入口节点
//环周长-C
//head-entry-L
//entry-meet-X
//meet-entry-C-X
//快指针走的路程是慢指针的二倍
//慢指针入环后走不了一圈就会被追上
//2(L+X)=L+X+NC
//L+X=NC
//L=NC-X
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return nullptr;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            //有环一定有入口点
            if(slow==fast){
                ListNode*meet=fast;
                while(head!=meet){
                    head=head->next;
                    meet=meet->next;
                }
                return meet;
            }
        }
        return nullptr;//无环
    }
};