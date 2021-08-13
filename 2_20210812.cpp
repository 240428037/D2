//解题思路
//层序遍历分层打印偶数层逆置打印
//偶数层levelcount%2==0-reverse
class Solution {
public:
    vector<vector<int> > Print(TreeNode* root) {
        vector<vector<int>>vv;
        if(root==nullptr){
            return vv;
        }
        int levelcount=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            levelcount++;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*cur=q.front();
                q.pop();
                v.push_back(cur->val);
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            if(levelcount%2==0){
                reverse(v.begin(),v.end());
            }
            vv.push_back(v);
        }
        return vv;
    }
};
//解题思路
//层序遍历分层打印
//队列
//上一层出队列带下一层入队列
class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode* root) {
        vector<vector<int>>vv;
        if(root==nullptr){
            return vv;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*cur=q.front();
                q.pop();
                v.push_back(cur->val);
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
            vv.push_back(v);
        }
        return vv;
    }
};
class Solution {
public:
    ListNode* sortInList(ListNode* head) {
        vector<int>v;
        ListNode*cur=head;
        while(cur){
            v.push_back(cur->val);
            cur=cur->next;
        }
        sort(v.begin(),v.end());
        cur=head;
        int i=0;
        while(cur){
            cur->val=v[i++];
            cur=cur->next;
        }
        return head;
    }
};



// struct ListNode{
//     int val;
//     struct ListNode* next;
//  };
//解题思路
//开一个数组遍历链表把链表的中节点的值放进去
//sort
//再把排序好的值放回链表
class Solution {
public:
    ListNode* sortInList(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        vector<int>v;
        ListNode*cur=head;
        while(cur){
            v.push_back(cur->val);
            cur=cur->next;
        }
        cur=head;//cur归位
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cur->val=v[i]++;
            cur=cur->next;
        }
        return head;
    }
};


//解题思路
//lesshead-lesstail
//greaterhead-greatertail
//用哨兵位的头节点对less和greater进行初始化
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        //对less和greater定义
        //然后使用哨兵位头节点进行初始化
        ListNode*lesshead,*lesstail;
        ListNode*greaterhead,*greatertail;
        lesshead=lesstail=new ListNode(-1);
        greaterhead=greatertail=new ListNode(-1);
        //划分
        ListNode*cur=head;
        while(cur){
            if(cur->val<x){
                lesstail->next=cur;
                lesstail=lesstail->next;
            }else{
                greatertail->next=cur;
                greatertail=greatertail->next;
            }
            cur=cur->next;
        }
        //后面那个链表greater置空
        greatertail->next=nullptr;
        //链接
        lesstail->next=greaterhead->next;
        //return要注意哨兵位头节点
        return lesshead->next;
    }
};


//解题思路
//1.用nums前k个元素建k个数的大堆
//2.用nums剩下的元素依次和堆顶元素比较
//如果比堆顶元素小则交换
//交换-先弹出再压入
//3.将优先级队列中的元素放到vector中返回
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int>nums, int k) {
        vector<int>v;
        //防止段错误
        if(k==0){
            return v;
        }
        priority_queue<int>q;
        //建堆
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        //比较
        for(int i=k;i<nums.size();i++){
            if(nums[i]<q.top()){
                q.pop();
                q.push(nums[i]);
            }
        }
        //返回
        for(int i=0;i<k;i++){
            v.push_back(q.top());
            q.pop();
        }
        return v;
    }
};