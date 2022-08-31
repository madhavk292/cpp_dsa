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

bool isLeaf(Node* root) {
    return !root->left && !root->right;
}

void addLeftBoundary(Node* root, vector<int> &res) {
    Node* cur = root->left;
    while (cur) {
        if (!isLeaf(cur)) res.push_back(cur->data);
        if (cur->left) cur = cur->left;
        else cur = cur->right;
    }
}
void addRightBoundary(Node* root, vector<int> &res) {
    Node* cur = root->right;
    vector<int> tmp;
    while (cur) {
        if (!isLeaf(cur)) tmp.push_back(cur->data);
        if (cur->right) cur = cur->right;
        else cur = cur->left;
    }
    for (int i = tmp.size()-1; i >= 0; --i) {
        res.push_back(tmp[i]);
    }
}

void addLeaves(Node* root, vector<int>& res) {
    if (isLeaf(root)) {
        res.push_back(root->data);
        return;
    }
    if (root->left) addLeaves(root->left, res);
    if (root->right) addLeaves(root->right, res);
}

vector <int> boundary(Node *root){
    //Your code here
    vector<int> res;
    if (!root) return res;

    if (!isLeaf(root)) res.push_back(root->data);

    addLeftBoundary(root, res); 
    
    // add leaf nodes
    addLeaves(root, res);

    addRightBoundary(root, res); 
    for(auto it: res){
        cout << it << " ";
    }
    cout << endl;
    return res;
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
 
    boundary(root);
 
    return 0;
}