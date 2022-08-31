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

vector<int> inorder, preorder, postorder;


void traversal(Node* root){
    stack<pair<Node*, int>> s;
    s.push({root, 1});
    while(!s.empty()){
        auto it = s.top();
        s.pop();

        // Preorder 1.pre 2.++ 3.left
        if(it.second == 1){
            preorder.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->left)
                s.push({it.first->left, 1});
        }

        else if(it.second == 2){
            inorder.push_back(it.first->data);
            it.second++;
            s.push(it);

            if(it.first->right)
                s.push({it.first->right, 1});
        }

        else{
            postorder.push_back(it.first->data);
        }
    }
}

void display(vector<int> x){
    for(auto i: x){
        cout<< i << " ";
    }
    cout<<endl;
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
 
    traversal(root);
    display(postorder);

 
    return 0;
}