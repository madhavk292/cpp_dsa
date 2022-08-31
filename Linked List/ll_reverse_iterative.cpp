//Reverse a linked list

#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

Node *reverseLL(Node *head){

	Node *prev_ref = NULL;
	while(head != NULL){
		Node *next_ref = head->next;
		head->next = prev_ref;
		prev_ref = head;
		head = next_ref;
	}
	return prev_ref;

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


	printList(reverseLL(head));

	return 0;
}

// time complexity O(N)
// space complexity O(1)