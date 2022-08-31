#include<bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node *next;
};


//In Place
Node* mergeTwoLists(Node* l1, Node* l2) {
    if(!l1) return l2;
    if(!l2) return l1;

    if(l1->data > l2->data) swap(l1, l2);
    // head of resultant merged list
    Node* head = l1;
    
    while(l1 != NULL && l2 != NULL){
    	Node* temp = NULL;
    	while(l1 != NULL && l1->data <= l2->data){
    		temp = l1; //storing last sorted node 
    		l1 = l1->next;
    	}
    	temp->next = l2;
    	swap(l1, l2);
    }
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

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 0;
	head->next = second;

	second->data = 2;
	second->next = third;
	
	third->data = 4;
	third->next = NULL;

	Node *head1 = NULL;
	Node *second1 = NULL;
	Node *third1 = NULL;

	head1 = new Node();
	second1 = new Node();
	third1 = new Node();

	head1->data = 1;
	head1->next = second1;

	second1->data = 2;
	second1->next = third1;
	
	third1->data = 3;
	third1->next = NULL;
	
	printList(head);
	cout << endl;
	printList(head1);
	cout << endl;


	printList(mergeTwoLists(head, head1));

	return 0;
}
