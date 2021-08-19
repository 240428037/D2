//前序中序重建二叉树
class Solution {
public:
    //解题思路
    //前序需要下标，中序需要区间
    //递归
    TreeNode*Rebuild(vector<int> pre,vector<int> vin,int&prei,int inbegin,int inend){
        //递归终止条件
        if(inbegin>inend){
            return nullptr;
        }
        //重建根节点
        TreeNode*root=new TreeNode(pre[prei]);
        //划分中序区间然后递归
        int rooti=inbegin;
        while(rooti<=inend){
            if(vin[rooti]==pre[prei]){
                break;
            }else{
                rooti++;
            }
        }
        //[inbegin,rooti-1]rooti[rooti+1,inend]
        //重建左右子树
        if(inbegin<=rooti-1){
            root->left=Rebuild(pre,vin,++prei,inbegin,rooti-1);
        }else{
            root->left=nullptr;
        }
        if(rooti+1<=inend){
            root->right=Rebuild(pre,vin,++prei,rooti+1,inend);
        }else{
            root->right=nullptr;
        }
        return root;
    }
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int prei=0;
        int inbegin=0;
        int inend=vin.size()-1;
        return Rebuild(pre,vin,prei,inbegin,inend);
    }
};



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//解题思路
//前序中序重建二叉树
//前序-根左右
//中序-左根右
//前序需要下标
//中序需要区间
//先重建根节点
//然后递归重建左右子树
//递归-终止条件-inbegin>inend
//递归终止条件为>-while和if的区间控制条件为<=-不要漏掉=
//子函数rebuild的参数prei需要传引用-前置++
class Solution {
public:
    TreeNode*rebuild(vector<int>pre,vector<int>in,int&prei,int inbegin,int inend){
        if(inbegin>inend){
            return nullptr;
        }
        TreeNode* root=new TreeNode(pre[prei]);
        //划分中序区间
        int rooti=inbegin;
        //<=
        while(rooti<=inend){
            if(pre[prei]==in[rooti]){
                break;
            }
            rooti++;
        }
        //[inbegin,rooti-1]-rooti-[rooti+1,inend]
        //重建左子树
        //<=
        if(inbegin<=rooti-1){
            root->left=rebuild(pre,in,++prei,inbegin,rooti-1);
        }else{
            root->left=nullptr;
        }
        //重建右子树
        //<=
        if(rooti+1<=inend){
            root->right=rebuild(pre,in,++prei,rooti+1,inend);
        }else{
            root->right=nullptr;
        }
        return root;
    }
    TreeNode* reConstructBinaryTree(vector<int>pre,vector<int>in) {
        int prei=0;
        int inbegin=0;
        int inend=in.size()-1;//-1!!!
        return rebuild(pre,in,prei,inbegin,inend);
    }
};


//根据二叉前序中序重建二叉树
//打印二叉树右视图
class Solution {
public:
    //解题思路
    //前序中序重建二叉树
    //二叉树层序遍历不分层打印-对于插入加限制条件
    TreeNode*Rebuild(vector<int>pre,vector<int>vin,int&prei,int inbegin,int inend){
        //递归终止条件
        if(inbegin>inend){
            return nullptr;
        }
        //重建根节点
        TreeNode*root=new TreeNode(pre[prei]);
        //根据前序去划分中序
        int rooti=inbegin;//!!!
        while(rooti<=inend){
            if(vin[rooti]==pre[prei]){
                break;
            }else{
                rooti++;
            }
        }
        //划分完成后
        //递归重建左右子树
        if(inbegin<=rooti-1){
            root->left=Rebuild(pre,vin,++prei,inbegin,rooti-1);
        }else{
            root->left=nullptr;
        }
        if(rooti+1<=inend){
            root->right=Rebuild(pre,vin,++prei,rooti+1,inend);
        }else{
            root->right=nullptr;
        }
        return root;
    }
    vector<int>Rightview(TreeNode*root){
        vector<int>v;
        if(root==nullptr){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            for(int i=q.size()-1;i>=0;i--){
                TreeNode*cur=q.front();
                q.pop();
                if(i==0){
                    v.push_back(cur->val);
                }
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
        }
        return v;
    }
    vector<int> solve(vector<int>& xianxu, vector<int>& zhongxu) {
        int prei=0;
        int inbegin=0;
        int inend=zhongxu.size()-1;
        TreeNode*root=Rebuild(xianxu,zhongxu,prei,inbegin,inend);
        return Rightview(root);
    }
};



//解题思路
//前序中序重建二叉树-复用代码
//右视图-层序遍历-对加入加限制条件
//for(i=levelsize-1;i>=0;i--)
//if(i==0)v.push_back;
class Solution {
public:
    TreeNode*rebuild(vector<int>pre,vector<int>in,int&prei,int inbegin,int inend){
        if(inbegin>inend){
            return nullptr;
        }
        TreeNode*root=new TreeNode(pre[prei]);
        int rooti=inbegin;
        while(rooti<=inend){
            if(pre[prei]==in[rooti]){
                break;
            }
            rooti++;
        }
        if(inbegin<=rooti-1){
            root->left=rebuild(pre,in,++prei,inbegin,rooti-1);
        }else{
            root->left=nullptr;
        }
        if(rooti+1<=inend){
            root->right=rebuild(pre,in,++prei,rooti+1,inend);
        }else{
            root->right=nullptr;
        }
        return root;
    }
    vector<int>rightview(TreeNode*root){
        vector<int>v;
        if(root==nullptr){
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int levelsize=q.size();
            for(int i=levelsize-1;i>=0;i--){
                TreeNode*cur=q.front();
                q.pop();
                if(i==0){
                    v.push_back(cur->val);
                }
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
        }
        return v;
    }
    vector<int> solve(vector<int>&pre, vector<int>&in) {
        int prei=0;
        int inbegin=0;
        int inend=in.size()-1;
        TreeNode*root=rebuild(pre,in,prei,inbegin,inend);
        return rightview(root);
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
//递归
//非递归-层序遍历-levelcount
class Solution {
public:
    int maxDepth(TreeNode* root) {
        /*//递归
        if(root==nullptr){
            return 0;
        }
        int leftdepth=maxDepth(root->left);
        int rightdepth=maxDepth(root->right);
        return leftdepth>rightdepth?leftdepth+1:rightdepth+1;
        */
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int levelcount=0;
        while(!q.empty()){
            levelcount++;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*cur=q.front();
                q.pop();
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
        }
        return levelcount;
    }
};


//解题思路
//复用求二叉树高度代码
//return abs&&左子树&&右子树
class Solution {
public:
    int maxdepth(TreeNode*root){
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int levelcount=0;
        while(!q.empty()){
            levelcount++;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode*cur=q.front();
                q.pop();
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
        }
        return levelcount;
    }
    bool IsBalanced_Solution(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        int leftdepth=maxdepth(root->left);
        int rightdepth=maxdepth(root->right);
        return abs(leftdepth-rightdepth)<=1
            &&IsBalanced_Solution(root->left)
            &&IsBalanced_Solution(root->right);
    }
};