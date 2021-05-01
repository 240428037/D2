

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}


typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL&&root->_right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}





typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}





class UnusualAdd {
public:
	int addAB(int A, int B) {
		if (A == 0)
			return B;
		if (B == 0)
			return A;
		int a = A^B;
		int b = (A&B) << 1;
		return addAB(a, b);
	}
};



class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum = 0;
		int carry = 0;
		while (B != 0)
		{
			sum = A^B;
			carry = (A&B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};




#include<iostream>
using namespace std;
int pathnum(int n, int m)
{
	if (m == 0 || n == 0)
		return 1;
	return pathnum(n, m - 1) + pathnum(n - 1, m);
}
int main()
{
	int m, n;
	//Ñ­»·ÊäÈë
	while (cin >> m >> n)
	{
		cout << pathnum(m, n) << endl;
	}
	return 0;
}