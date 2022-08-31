// https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1#
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

Node* deleteNode(Node *head,int x){
    //Your code here
    if(!head) return head;
    Node* temp = head;
    if(x == 1) return temp->next;
    for(int i=0; temp!=NULL && i<(x-2); i++)
        temp = temp->next;
    if(temp == NULL || temp->next == NULL)
        return head;
    temp->next = temp->next->next;
    return head;
}


void printList(Node *n){
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
}

int main(){
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;
	Node *fourth = NULL;
	Node *fifth = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	fourth->data = 4;
	fourth->next = fifth;
	
	fifth->data = 5;
	fifth->next = NULL;
	
	printList(head);
	cout << endl;
	printList(deleteNode(head, 3));
	return 0;
}
