#include <bits/stdc++.h>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void helper(Node* root, int level, vector<int> &ans){
    if(!root) return;
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    helper(root->left, level+1, ans);
    helper(root->right, level+1, ans);
}

vector<int> leftView(Node *root){
    vector<int> ans;
    if(!root) return ans;
    helper(root, 0, ans);
    // for(auto i: ans)
    //     cout << i << " ";
    return ans;
}

int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    leftView(root);
 
    return 0;
}