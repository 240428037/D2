class Solution {
public:
    TreeNode* Mirror(TreeNode* pRoot) {
        //分治递归
        //递归终止条件
        if(pRoot==nullptr){
            return nullptr;
        }
        //交换
        swap(pRoot->left,pRoot->right);
        //递归
        Mirror(pRoot->left);
        Mirror(pRoot->right);
        return pRoot;
    }
};


/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
//解题思路
//递归
class Solution {
public:
    TreeNode* Mirror(TreeNode* root) {
        if(root==nullptr){
            return nullptr;
        }
        swap(root->left,root->right);
        Mirror(root->left);
        Mirror(root->right);
        return root;
    }
};




class Solution {
public:
    bool compare(TreeNode*left,TreeNode*right){
        if(left==nullptr&&right==nullptr){
            return true;
        }else if(left==nullptr||right==nullptr){
            return false;
        }else if(left->val!=right->val){
            return false;
        }
        bool outside=compare(left->left,right->right);
        bool inside=compare(left->right,right->left);
        bool issame=outside&&inside;
        return issame;
    }
    bool isSymmetrical(TreeNode* pRoot) {
        if(pRoot==nullptr){
            return true;
        }
        return compare(pRoot->left,pRoot->right);
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
//递归判断是否对称-两个树比较判断-子函数-源函数参数只有一个节点
//传入子函数前先判断节点是否为空
class Solution {
public:
    bool compare(TreeNode*l1,TreeNode*l2){
        if(l1==nullptr&&l2==nullptr){
            return true;
        }
        if(l1==nullptr||l2==nullptr){
            return false;
        }
        if(l1->val!=l2->val){
            return false;
        }
        bool inside=compare(l1->right,l2->left);
        bool outside=compare(l1->left,l2->right);
        bool issame=inside&&outside;
        return issame;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return compare(root->left,root->right);
    }
};


class Solution {
public:
    bool VerifyPostorder(vector<int>&postorder,int postbegin,int postend){
        //终止条件
        if(postbegin>postend){
            return true;
        }
        int rooti=postbegin;//rooti为工作指针
        int rootval=postorder[postend];//rootval存储根节点的值
        
        //划分左右子树区间
        //[postbegin,leftend],[rightbegin,postend],rootval
        while(postorder[rooti]<rootval){
            rooti++;
        }
        int leftend=rooti-1;
        int rightbegin=rooti;
        while(rootval<postorder[rooti]){
            rooti++;
        }
        return rooti==postend&&VerifyPostorder(postorder,postbegin,leftend)&&
        VerifyPostorder(postorder,rightbegin,postend-1);
        
    }
    bool VerifySquenceOfBST(vector<int> sequence) {
        //题目规定空树不是二叉搜索树
        if(sequence.empty()){
            return false;
        }
        //后序需要区间
        int postbegin=0;
        int postend=sequence.size()-1;
        return VerifyPostorder(sequence,postbegin,postend);
    }
};



class Solution {
public:
    bool postOrder(vector<int>& postorder, int start, int end) {
        /*
        *  递归终止条件：
        *  start是数组最左边元素下标，end是数组最右边元素下标
        *  所以start >= end说明已经递归到只有一个节点(=)或没有节点(>)了
        *  返回真
        */
        if (start >= end) return true;
        int p = start; // 工作指针，初始为数组最左边
        int rootValue = postorder[end]; // 储存当前树的根节点的值
        /*
        *  若当前工作指针所指元素大于根节点值，
        *  说明为左子树节点
        *  工作指针右移
        */
        while (rootValue > postorder[p]) p++;
        /*
        *  上面循环结束时，工作指针指向的是不大于根节点值的节点
        *  即左子树结束节点为 p-1，右子树开始节点为p
        */
        int lfetTreeEnd = p - 1, rightTreeStart = p;
        /*
        *  若当前工作指针所指元素小于根节点值，
        *  说明为右子树节点
        *  工作指针右移
        */
        while (rootValue < postorder[p]) p++;
        /*
        *  上面循环结束时，工作指针指向第一个不小于根节点的节点
        *  若当前遍历的树是二叉搜索树，该工作指针p所指元素应该是end下标所指元素
        *  然后递归判断左子树和右子树，
        *  只有当左子树、右子树和当前整树都为二叉搜索树时，才返回真
        *  所以是&&
        *  （注意递归判断右子树时，右边界要end-1，去除原来树的根节点）
        */
        return p == end && postOrder(postorder, start, lfetTreeEnd) 
                        && postOrder(postorder, rightTreeStart, end - 1);
    }
    bool verifyPostorder(vector<int>& postorder) {
        if (postorder.empty()) return true; // 判空
        /*
        *  调用postOrder，
        *  初始start在数组最左边，即下标为0
        *  初始end在数组最右边，即下标为数组长度减一
        *  [start, end]是左闭右闭区间
        */
        return postOrder(postorder, 0, postorder.size() - 1);
    }
};