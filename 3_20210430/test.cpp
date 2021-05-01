bool isUnivalTree(struct TreeNode* root){
	if (root == NULL)
		return true;
	if (root->left&&root->val != root->left->val)
		return false;
	if (root->right&&root->val != root->right->val)
		return false;
	//µÝ¹é
	return isUnivalTree(root->left) && isUnivalTree(root->right);
}



//·ÖÖÎµÝ¹é
//A B C
//N L R
//DepthA=Max(B,C)+1
int maxDepth(struct TreeNode* root){
	if (root == NULL)
		return 0;
	int leftdepth = maxDepth(root->left);
	int rightdepth = maxDepth(root->right);
	return leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
}



