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
Node *reverse(Node *head){
	Node *curr = head;
	Node *prev = NULL;
	Node *next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}
Node *insertAtTail(Node *&head, Node *&tail, int val){
	Node *newNode = new Node(val);
	
	//empty list
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = tail->next;
	}
}
Node *add(Node *first, Node *second) {
	int carry = 0;
	Node *ansHead = NULL;
	Node *ansTail = NULL;

	while(first != NULL || second != NULL || carry != 0){

		int val1 = 0;
		if(first != NULL)
			val1 = first-> data;

		int val2 = 0;
		if(second != NULL)
			val2 = second->data;

		int sum = carry + val1 + val2;
		int digit = sum % 10;
		
		insertAtTail(ansHead, ansTail, digit);
		carry = sum / 10;

		if(first != NULL)
			first = first -> next;

		if(second != NULL)
			second = second -> next;
		
	}
	return ansHead;

	// this below code is changed by the above code
	
	/* while(first != NULL && second != NULL){
		int sum = carry + first->data + second->data;
		int digit = sum % 10;
		
		insertAtTail(ansHead, ansTail, digit);
		carry = sum / 10;
		first = first->next;
		second = second->next;
	}
	while(first != NULL){
		int sum = carry + first->data;
		int digit = sum % 10;
		
		insertAtTail(ansHead, ansTail, digit);
		carry = sum / 10;
		first = first->next;
	}
	while(second != NULL){
		int sum = carry + second->data;
		int digit = sum % 10;
		
		insertAtTail(ansHead, ansTail, digit);
		carry = sum / 10;
		second = second->next;
	}
	while(carry != 0){
		int sum = carry;
		int digit = sum % 10;
		
		insertAtTail(ansHead, ansTail, digit);
		carry = sum / 10;
	}

	return ansHead; */
}
Node *addTwoLists(Node *first, Node *second) {
	
	//Step-1 reverse Lists
	first = reverse(first);
	second = reverse(second);

	//Step-2 add lists
	Node *ans = add(first, second);
	return (reverse(ans));
}
void print(Node *head){
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

	Node *ansHead = add(first, second);
	print(ansHead);

	return 0;
}