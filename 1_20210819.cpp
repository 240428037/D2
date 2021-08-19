/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
//解题思路
//前序-根左右
//中序-左根右
//后序-左右根
//非递归实现-stack
//前序
//中序
//左路节点先入栈-出栈的时候带右路节点入栈
//循环控制条件while(!st.empty()||cur)
//进入循环后先while(cur)-压栈-左路节点入栈
//前序v.push_back放在while(cur)中-中序放在while(cur)外
//后序
//先压栈
//循环控制条件while(!st.empty())
//st.top-v.push_back-st.pop
//if(cur->left)-if(cur->right)
//类似于层序遍历
//最后reverse
class Solution {
public:
    //前序-根左右
    //1
    //23
    //4567
    //1245367
    vector<int>preorder(TreeNode*root){
        vector<int>v;
        if(root==nullptr){
            return v;
        }
        stack<TreeNode*>st;
        TreeNode*cur=root;
        while(!st.empty()||cur){
            while(cur){
                st.push(cur);
                v.push_back(cur->val);
                cur=cur->left;
            }
            cur=st.top();
            st.pop();
            cur=cur->right;
        }
        return v;
    }
    //中序-左根右
    //1
    //23
    //4567
    //4251637
    vector<int>inorder(TreeNode*root){
        vector<int>v;
        if(root==nullptr){
            return v;
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
            v.push_back(cur->val);
            cur=cur->right;
        }
        return v;
    }
    //后序-左右根
    //1
    //23
    //4567
    //4526731
    //reverse-1376254
    vector<int>postorder(TreeNode*root){
        vector<int>v;
        if(root==nullptr){
            return v;
        }
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode*cur=st.top();
            v.push_back(cur->val);
            st.pop();
            if(cur->left){
                st.push(cur->left);
            }
            if(cur->right){
                st.push(cur->right);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
    vector<vector<int> > threeOrders(TreeNode* root) {
        vector<vector<int>>vv;
        vv.push_back(preorder(root));
        vv.push_back(inorder(root));
        vv.push_back(postorder(root));
        return vv;
    }
};



/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
//解题思路
//在层序遍历分层打印的基础上
//引入levelcount
//levelcount%2==0-reverse
class Solution {
public:
    vector<vector<int> > Print(TreeNode*root) {
        vector<vector<int>>vv;
        if(root==nullptr){
            return vv;
        }
        queue<TreeNode*>q;
        q.push(root);
        int levelcount=0;
        while(!q.empty()){
            levelcount++;
            vector<int>v;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*cur=q.front();
                v.push_back(cur->val);
                q.pop();
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



/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */
//解题思路
//递归-返回值为节点-开辟子函数
//递归-终止条件
class Solution {
public:
    TreeNode*common(TreeNode* root, int l1, int l2){
        //终止条件
        if(root->val==l1||root->val==l2){
            return root;
        }
        TreeNode*leftnode=common(root->left,l1,l2);
        TreeNode*rightnode=common(root->right,l1,l2);
        if(leftnode==nullptr&&rightnode==nullptr){
            return nullptr;
        }
        if(leftnode==nullptr){
            return rightnode;
        }
        if(rightnode==nullptr){
            return leftnode;
        }
        return root;
    }
    int lowestCommonAncestor(TreeNode* root, int l1, int l2) {
        return common(root,l1,l2)->val;
    }
};