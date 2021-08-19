class Solution {
public:
    TreeNode* KthNode(TreeNode* pRoot, int k) {
        //上来先考虑特殊情况
        if(pRoot==nullptr){
            return nullptr;
        }
        stack<TreeNode*>st;
        TreeNode*cur=pRoot;
        while(!st.empty()||cur!=nullptr){
            //1.左路节点入栈，左路节点入栈
            while(cur!=nullptr){
                st.push(cur);
                cur=cur->left;
            }
            //2.取栈中节点访问它的右子树
            cur=st.top();
            st.pop();
            //判断k
            k--;
            if(k==0){
                return cur;
            }
            cur=cur->right;
        }
        return nullptr;
    }
};


//解题思路
//二叉搜索树中序遍历结果为一个递增序列
//第k个节点-第k小-中序序列从左到右第k个
//二叉树的中序非递归遍历思路
class Solution {
public:
    TreeNode* KthNode(TreeNode* root, int k) {
        if(root==nullptr){
            return nullptr;
        }
        stack<TreeNode*>st;
        TreeNode*cur=root;
        while(!st.empty()||cur){
            while(cur){
                st.push(cur);
                cur=cur->left;
            }
            cur=st.top();
            st.pop();
            k--;
            if(k==0){
                return cur;
            }
            cur=cur->right;
        }
        return nullptr;
    }
};


class Solution {
public:
    vector<vector<int>>vv;
    void backtracking(TreeNode*root,vector<int>&v,int&target){
        if(root==nullptr){
            return;
        }
        target-=root->val;
        v.push_back(root->val);
        if(target==0&&root->left==nullptr&&root->right==nullptr){
            vv.push_back(v);
        }
        backtracking(root->left,v,target);
        backtracking(root->right,v,target);
        v.pop_back();
        target+=root->val;
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root==nullptr){
            return{};
        }
        vector<int>v;
        backtracking(root,v,expectNumber);
        return vv;
    }
};




class Solution {
public:
    vector<vector<int>>vv;
    void backtracking(TreeNode*root,vector<int>&v,int&target){
        if(root==nullptr){
            return;
        }
        target-=root->val;
        v.push_back(root->val);
        if(target==0&&root->left==nullptr&&root->right==nullptr){
            vv.push_back(v);
        }
        backtracking(root->left,v,target);
        backtracking(root->right,v,target);
        v.pop_back();
        target+=root->val;
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root==nullptr){
            return{};
        }
        vector<int>v;
        backtracking(root,v,expectNumber);
        return vv;
    }
};