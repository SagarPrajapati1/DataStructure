#include <bits/stdc++.h>
#include "class.cpp"
using namespace std;

Node *takeInput(){
	int d;
	cout << "Enter the data : ";
	cin >> d;

	Node *head = NULL;
	Node *tail = NULL;
	while(d != -1){
		Node *newNode = new Node(d);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}

		else {
			tail->next =  newNode;
			tail = tail->next;
		}
		cin >> d;
	}
	return head;
}

Node *RemoveSortedDuplicates(Node *head){

	Node *curr = head;

	while(curr != NULL){
		
		// equal elements 
		if((curr->next != NULL) && curr ->data == curr->next->data){
			Node *next_next = curr->next->next;
			Node *nodeTodelete = curr->next;
			delete (nodeTodelete);
			curr->next = next_next;
		}
		else { // not equal
			curr = curr->next;
		}
	}
	return head;
}

Node *RemoveUnsortedDuplicates(Node *head){
	cout << "Inside the Unsorted function : " << endl;
	Node *curr = head;
	while(curr != NULL){
		Node *temp = curr->next;
		while(temp != NULL){
			if(curr->data == temp->data){
				Node *todelete = temp;
				Node *next_next = temp->next;
				delete (todelete);
				curr->next = next_next;
				temp = next_next;
			}
			else {
				temp = temp->next;
			}
		}
		curr = curr->next;
	}
	return head;
}

void print(Node *head) {
	if(head == NULL){
		cout << "List khali h ";
		return;
	}

	Node *temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main()
{
	Node *head = takeInput();
	cout << "Before Remove duplicates. ";
	print(head);
	cout << endl;

	/* head = RemoveSortedDuplicates(head);
	cout << "After Remove duplicates. ";
	print(head);
	cout << endl; */

	// head = takeInput().sort();
	head = RemoveUnsortedDuplicates(head);
	cout << "After unsorted delete nodes. ";
	print(head);
	cout << endl;
	return 0;
}