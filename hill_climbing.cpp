#include<iostream>
using namespace std;

struct TreeNode {
	char node_name;
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
};

TreeNode* create_node(char node_name, int data){
	TreeNode* new_node = new TreeNode();
	if(!new_node){
		cout<<"Error"<<endl;
		return NULL;
	}
	new_node->node_name = node_name;
	new_node->data = data;
	new_node->left = new_node->right = NULL;
	return new_node;
}

void hill_climb(TreeNode* root, char goal){
	TreeNode* current = root;
	int cost = current->data;
	cout<<"Starting from node: "<<root->node_name<<endl;
	while(current){
		cout<<"Exploring Node: "<<current->node_name<<endl;
		if(current->node_name == goal){
			cost += current->data;
			break;
		}
		if(current->left == NULL)
			current = current->right;
		else if(current->right == NULL)
			current = current->left;
		else if((current->left != NULL) && (current->right != NULL) && ((current->left)->data < (current->right)->data))
			current = current->left;
		else
			current = current->right;
		cost += current->data;
	}
	if(current->node_name == goal){
		cout<<"Found Goal State: "<<goal<<endl;
		cout<<"Cost: "<<cost<<endl;
	}
	else
		cout<<"Goal State not found"<<endl;
}

TreeNode* root = NULL;
int main(){
root = create_node('A', 3);
root->left = create_node('B', 7);
root->right = create_node('C', 2);
(root->left)->left = create_node('D', 1);
(root->right)->right = create_node('E', 4);
((root->left)->left)->right = create_node('G', 0);
((root->right)->right)->right = create_node('G', 0);
hill_climb(root, 'G');
return 0;
}