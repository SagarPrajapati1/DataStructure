#include <bits/stdc++.h>
#include "class.cpp"
using namespace std;

Node *takeInput(){
	int d;
	cout << "Enter the node data : ";
	cin >> d;

	Node *head = NULL;
	Node *tail = NULL;
	while(d != -1){
		Node *newNode = new Node(d);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}

		else {
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> d;
	}
	return head;
}

Node *solve(Node *first, Node *second) {
	Node *curr1 = first;
	Node *next1 = first->next;
	Node *curr2 = second;
	Node *next2 = second->next;

	while((next1 != NULL) && (curr2 != NULL)){
		if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
			
			//include nodes in between the first list
			curr1->next = curr2;
			next2 = curr2->next;
			curr2->next = next1;
			
			// update pointers
			curr1 = curr2;
			curr2 = next2;
		}
		else{
			curr1 = next1;
			next1 = next1->next;

			// if first list is empty 
			if(next1 == NULL){
				curr1->next = curr2;
				return first;
			}
		}
	}
	return first;
}

Node *MergeList(Node *first, Node *second){
	if(first == NULL){
		return second;
	}
	if(second == NULL){
		return first;
	}
	if(first->data <= second->data){
		return solve(first, second);
	}
	else {
		return solve(second, first);
	}
}
void print(Node *head){
	if(head == NULL){
		cout << "Khali h" << endl;
	}
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}
int main()
{
	Node *first = takeInput();
	Node *second = takeInput();

	first = MergeList(first, second);
	print(first);

	return 0;
}