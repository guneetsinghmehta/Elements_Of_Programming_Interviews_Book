#include <iostream>
struct TreeNode{
	TreeNode* left;
	TreeNode* right;
	TreeNode* parent;
	int d_val;
	TreeNode(int val):d_val(val),
			  left(NULL),
			  right(NULL),
			  parent(NULL){}
};

void inOrderTraversal(TreeNode* root);

int main() {
	using namespace std;
	cout << "kipper\n";
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->left->parent = root;

	root->right = new TreeNode(3);
	root->right->parent = root;

	inOrderTraversal(root);
	return 1;
}

void inOrderTraversal(TreeNode* root){
	using namespace std;
	if(root != NULL){
		inOrderTraversal(root->left);
		cout << root->d_val << '\n';
 		inOrderTraversal(root->right);
	}
}
