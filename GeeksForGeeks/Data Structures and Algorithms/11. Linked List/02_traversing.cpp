#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next; // self referential structure
	Node(int x){
		data = x;
		next = NULL; 
	}
};

void printLinkedList(Node *head){
	while(head != NULL){
		cout << (head -> data) << " ";
		head = head -> next;
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// Guess the output
	Node *head = new Node(10);
	printLinkedList(head);
	printLinkedList(head);

	return 0;
}	