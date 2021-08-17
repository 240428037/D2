//解题思路
//前序-根左右
//中序-左根右
//后序-左右根
class Solution {
public:
    //前序-根左右
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
    ////中序-左根右
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
            v.push_back(cur->val);
            st.pop();
            cur=cur->right;
        }
        return v;
    }
    //后序非递归
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