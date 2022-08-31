// https://leetcode.com/problems/add-two-numbers/
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};

Node* addTwoNumbers(Node* head1, Node* head2) {
    int carry = 0;
    Node* dummy = new Node();
    Node* temp = dummy;
    while(head1 && head2){
    	int sum = 0;
    	sum += head1->data;
    	sum += head2->data;
    	sum += carry;
    	carry = sum / 10;
    	int num = sum % 10;

    	cout << num; 
    	Node* new_node = new Node();
    	new_node->data = num;
    	temp->next = new_node;
    	temp = temp->next;
    	head1 = head1->next;
    	head2 = head2->next;
    }

    while(head1){
    	int sum = 0;
    	sum += head1->data;
    	sum += carry;
    	carry = sum / 10;
    	int num = sum % 10;
    	cout << num;
    	Node* new_node = new Node();
    	new_node->data = num;
    	temp->next = new_node;
    	temp = temp->next;
    	head1 = head1->next;
    }

    while(head2){
    	int sum = 0;
    	sum += head2->data;
    	sum += carry;
    	carry = sum / 10;
    	int num = sum % 10;
    	cout << num;
    	Node* new_node = new Node();
    	new_node->data = num;
    	temp->next = new_node;
    	temp = temp->next;
    	head2 = head2->next;
    }
    if(carry){
    	cout << carry;
    	Node* new_node = new Node();
    	new_node->data = carry;
    	temp->next = new_node;
    	temp = temp->next;
    }

    return dummy->next;
}

void printList(Node *n){
	while(n != NULL){
		cout << n->data <<" ";
		n = n->next;
	}
}


int main(){
	Node *head1 = NULL;
	Node *second1 = NULL;
	Node *third1 = NULL;

	Node *head2 = NULL;
	Node *second2 = NULL;
	Node *third2 = NULL;
	Node *fourth2 = NULL;

	head1 = new Node();
	second1 = new Node();
	third1 = new Node();
	head2 = new Node();
	second2 = new Node();
	third2 = new Node();
	fourth2 = new Node();

	head1->data = 2;
	head1->next = second1;
	second1->data = 4;
	second1->next = third1;
	third1->data = 3;
	third1->next = NULL;
	
	head2->data = 5;
	head2->next = second2;
	second2->data = 6;
	second2->next = third2;
	third2->data = 8;
	third2->next = fourth2;
	fourth2->data = 2;
	fourth2->next = NULL;


	printList(head1);
	cout << endl;
	printList(head2);
	cout << endl;
	printList(addTwoNumbers(head1, head2));
	// printList(removeNthFromEnd(head, 4));
	return 0;
}