//Basic LL insert at beginning/end/meddle and print the LL

#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void insertBeginning(Node **head_ref, int new_data){
	Node *new_node = new Node();
	new_node-> data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

/* Given a reference (pointer to pointer) to the head 
of a list and an int, appends a new node at the end */
void insertEnd(Node **head_ref, int new_data){

	//allocate node
	Node *new_node = new Node();

	//used to find the last node withour loosing the head
	Node *last = *head_ref;

	// put in the data
	new_node->data = new_data;

	// This new node is going to be the last node, so make next of it as NULL
	new_node -> next = NULL;

	//If the Linked List is empty, then make the new node as head
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;		
	}

	//Else traverse till the last node

	while(last->next != NULL)
		last = last->next;

	//Change the next of last node
	last->next = new_node;
	return;

}

void insertAfter(Node *prev_node, int new_data){
	//check if the given prev_node is NULL
	if(prev_node == NULL){
		cout << "cannot be Null";
		return;
	}

	Node *new_node = new Node();
	new_node->data = new_data; 
	new_node->next = prev_node->next;
	prev_node->next = new_node; 
}

void printList(Node *n){
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
}

int main(){
	// Start with the empty list
	Node *head = NULL;
	
	insertEnd(&head, 6);
	insertEnd(&head, 4);

	insertBeginning(&head, 5);
	insertBeginning(&head, 3);

	insertAfter(head->next, 8); 

	printList(head);

	return 0;
}