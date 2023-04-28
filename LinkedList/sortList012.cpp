#include <bits/stdc++.h>
using namespace std;
#include "class.cpp"

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
Node *Sort012(Node *head){
	
	int zeroCount = 0;
	int oneCount = 0;
	int twoCount = 0;

	Node *temp = head;
	while(temp != NULL){
		if(temp->data ==  0){
			zeroCount++;
		}
		else if(temp->data == 1){
			oneCount++;
		}
		else if(temp->data == 2) {
			twoCount++;
		}
		temp = temp->next;
	}

	temp = head;
	while(temp != NULL){
		if(zeroCount != 0) {
			temp->data = 0;
			zeroCount--;
		}
		else if(oneCount != 0){
			temp->data = 1;
			oneCount--;
		}
		else if(twoCount != 0){
			temp->data = 2;
			twoCount--;
		}
		temp = temp->next;
	}

	return head;
}
void InsertAtTail(Node *&tail, Node *curr){
	cout << "Inside Tail" << endl;
	tail->next = curr;
	tail = curr;
}

Node *Sort012List(Node *head){
	cout << "sort 0 1 2" << endl;
	//create three lists to store the 0's 1's and 2's
	Node *zerohead = new Node(-1);
	Node *zerotail = zerohead;
	Node *onehead = new Node(-1);
	Node *onetail = onetail;
	Node *twohead = new Node(-1);
	Node *twotail = twohead;
	cout << "LOOP";
	Node *curr = head;
	while(curr != NULL){
		int value = curr->data;
		if(value == 0){
			InsertAtTail(zerotail, curr);
		}
		else if(value == 1){
			InsertAtTail(onetail, curr);
		}
		else if(value == 2){
			InsertAtTail(twotail, curr);
		}
		curr = curr->next;
		cout << "current data" << curr->data << endl;
	}

	//merge three lists 0s 1s 2s
	
	//1s list is not empty
	if(onehead -> next != NULL){
		zerotail->next = onehead->next;
	}
	// 1s list empty
	else{
		zerotail->next = twohead->next;
	}
	onetail->next = twohead->next;
	twotail->next = NULL;
	
	//update head
	head = zerohead->next;
	
	// delete dummy nodes
	delete zerohead;
	delete onehead;
	delete twohead;
	
	return head;
}

void print(Node *head){
	Node *temp = head;
	if(head == NULL){
		cout << "List khali h." << endl;
		return;
	}
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	
}
int main()
{
	Node *head = takeInput();
	// head = Sort012(head);
	print(head);
	head = Sort012List(head);
	print(head);

	return 0;
}