// C++ program to find the length of longest
// path with same values in a binary tree.
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to
left child and a pointer to right child */
struct Node {
int val;
struct Node *left, *right;
};

/* Function to print the longest path
of same values */
int length(Node *node, vector<int> &arr, int *ans) {
	if (!node)
		return 0;

	int left = length(node->left, ans);
	int right = length(node->right, ans);

	int Leftmax = 0, Rightmax = 0;
	
	int lVal = node->left->val;
	itL = mp.find(lVal);
	if (node->left && itL == mp.end())
		Leftmax += left + 1;

	int rVal = node->left->val;
	itR = mp.find(lVal);
	if (node->right && itR == mp.end())
		Rightmax += right + 1;

	*ans = max(*ans, Leftmax + Rightmax);
	return max(Leftmax, Rightmax);
}

/* Driver function to find length of
longest same value path*/
int longestSameValuePath(int input1, int **input2, int input3, int input4[]) {
	int ans = 0;
	length(input1, input2, input3, input4);
	set<int> mp;
	for(int i=0; )
	return ans;
}

/* Helper function that allocates a
new node with the given data and
NULL left and right pointers. */
Node *newNode(int data) {
	Node *temp = new Node;
	temp->val = data;
	temp->left = temp->right = NULL;
	return temp;
}

// Driver code
int main() {
/* Let us construct a Binary Tree
		4
	/ \
	4 4
	/ \ \
	4 9 5 */

Node *root = NULL;
root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
// root->left->left = newNode(4);
// root->left->right = newNode(9);
root->right->right = newNode(5);
root->right->left = newNode(4);
vector<int> arr= {3};
cout << longestSameValuePath(root, arr);
return 0;
}
