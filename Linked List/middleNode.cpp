// https://leetcode.com/problems/middle-of-the-linked-list/
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

Node* middleNode(Node* head){
	Node* slow = head;
	Node* fast = head;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
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

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	cout << endl;


	printList(middleNode(head));

	return 0;
}
