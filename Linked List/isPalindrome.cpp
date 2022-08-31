// https://leetcode.com/problems/palindrome-linked-list/
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

//utility function to insert node in the list
void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

bool isPalindrome(ListNode* head) {
	int len = 0;
	ListNode* dummy = head;
	while(dummy != NULL){
		len++;
		dummy = dummy->next;
	}

	
}

int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    if(isPalindrome(head) == true)
    cout<<"isPalindrome\n";
    else
    cout<<"Not isPalindrome\n";
    return 0;
}