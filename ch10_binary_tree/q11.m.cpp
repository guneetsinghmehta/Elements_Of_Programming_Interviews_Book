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

	root->left->right = new TreeNode(4);
	root->left->right->parent = root->left;

	inOrderTraversal(root);
	return 1;
}

void inOrderTraversal(TreeNode* root){
	using namespace std;
	char direction = 'L'; // possible values being 'L' and 'R' and 'U'
	while ( root != NULL ){
		if(direction == 'L'){
			if(root->left != NULL){
				root = root->left;
			}
			else{
				direction = 'R';	
			}
		}
		else if (direction == 'R') {
			cout << root->d_val << '\n';
			if(root->right != NULL){
				root = root->right;
				direction = 'L';
			}
			else{
				direction = 'U';
			}
		}
		else if(direction == 'U'){
			if(root != NULL && root->parent != NULL && root->parent->left == root){
				root = root->parent;
				direction = 'R';
			}
			else if(root != NULL && root->parent != NULL && root->parent->right == root){
				root = root->parent;
			}
			else if(root != NULL && root->parent == NULL){
				root = NULL;
			}
		}
	}
	
	/*
	if(root != NULL){
		inOrderTraversal(root->left);
		cout << root->d_val << '\n';
 		inOrderTraversal(root->right);
	}
	*/
}
