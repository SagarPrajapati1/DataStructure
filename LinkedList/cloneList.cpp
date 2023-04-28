#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node *random;

	Node(int d){
		this->data = d;
		this->next = NULL;
		this->random = NULL;
	}
};

void InsertAtTail(Node *&head, Node *&tail, int d){

	Node *newNode = new Node(d);
	
	if(head == NULL){
		head = newNode;
		tail = newNode;
		return;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}
Node *cloneList(Node *head){
	
	//step -1 create a list
	Node *cloneHead = NULL;
	Node *cloneTail = NULL;

	Node *temp = head;
	while(temp != NULL){
		InsertAtTail(cloneHead, cloneTail, temp->data);
		temp = temp->next;
	}
	//step -2 create mapping with original list  
	unordered_map<Node *, Node *> oldToNewNode;
	Node *originalNode = head;
	Node *cloneNode = cloneHead;
	while(originalNode != NULL /* && cloneNode != NULL */){
		oldToNewNode[originalNode] = cloneNode;
		originalNode = originalNode->next;
		cloneNode = cloneNode->next;
	}
	originalNode = head;
	cloneNode = cloneHead; 
	while(originalNode != NULL){
		cloneNode->random = oldToNewNode[originalNode->random];
		originalNode = originalNode->next;
		cloneNode = cloneNode->next;
	}
	return cloneHead;
}
Node *copyList(Node*head){
	// Step -1 create a clone list;
	Node *cloneHead = NULL;
	Node *cloneTail = NULL;

	Node *temp = head;
	while(temp != NULL){
		InsertAtTail(cloneHead, cloneTail, temp->data);
		temp = temp->next;
	}
	
	//Step-2 cloneNode add in between original list
	Node *originalNode = head;
	Node *cloneNode = cloneHead;

	while(originalNode != NULL && cloneNode != NULL){
		Node *next = originalNode->next;
		originalNode->next = cloneNode;
		originalNode = next;

		next = cloneNode->next;
		cloneNode->next = originalNode;
		cloneNode = next;
	}
	// Step -3 random pointer copy;
	Node *temp = head;
	while(temp != NULL) {
		if(temp->next != NULL){
			temp->next->random = temp->random ? temp->random->next : temp->random;
		}
	}
	//Step-4 revert changes done in step -2
	originalNode = head;
	cloneNode = cloneHead;
	while(originalNode != NULL && cloneNode != NULL){
		originalNode->next = cloneNode->next;
		originalNode = originalNode->next;

	if(originalNode != NULL)
		cloneNode->next = originalNode ->next;
		
	cloneNode = cloneNode->next;
	}
	return cloneHead;
}