#include <bits/stdc++.h>
#include "class.cpp"
using namespace std;

Node *take_Input(){
	int data;
	cout << "Enter Node data :";
	cin >> data;

	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> data;
		
	}
	tail->next = head->next;
}

void print(Node *head){
	
	Node *temp = head;
	if(temp == NULL){
		cout << "List khali h " << endl;
	}

	while(temp->next != NULL){
		cout << temp -> data;
		temp = temp->next;
	}
}

bool isCircular(Node *head){
	
	// case -1 -> list is empty
	if(head == NULL){
		return false;
	}

	// optional case it is handeled by the case -3
	//case -2 -> list have only one node
	/* if(head->next == NULL){
		return false;
	}
	if(head -> next == head){
		return true;
	} */

	//case -3 ->  list have >1 node

	Node *temp = head->next;
	while(temp != NULL && temp != head){
		temp = temp->next;
	}
	if(temp == NULL){
		return false;
	}
	if(temp == head){
		return true;
	}
}

// Floyd's cyclye detection algo
Node* floydcycledetect(Node *head) {
	
	if(head == NULL){
		return NULL;
	}

	Node *slow = head;
	Node *fast = head;
	while(slow != NULL && fast != NULL){
		fast = fast->next;
		//check if fast is not NULL then move the fast
		if(fast!= NULL){
			fast = fast->next;
		}
		slow = slow->next;
		if(fast == slow) {
			cout << "Loop Exist" << endl;
			return slow;
		}
	}
	cout << "Loop Not Exist" << endl;
	return NULL;
}

Node *getStarting (Node *head){
	if(head == NULL){
		return head;
	}

	Node *slow = head;
	Node *intersection = floydcycledetect(head);
	/* if(intersection == NULL){
		return head;
	} */

	while(slow != intersection){
		slow = slow->next;
		intersection = intersection->next;
	}
	return slow;
}


// using a map SC O(n) find the loop
bool detectLoop(Node*head){
	//empty list
	if(head == NULL){
		return false;
	}
	map<Node *, bool> visited;
	Node *temp = head;
	while(temp != NULL){
		if(visited[temp] == true){
			return true;
		}

		visited[temp] = true;
		temp = temp->next;
	}
	return false;
}
Node *removeLoop(Node*head){
	if(head == NULL){
		return head;
	}
	Node *start = getStarting(head);
	if(start == NULL){
		return head;
	}
	Node *temp = start;
	while(temp -> next != start){
		temp = temp->next;
	}

	temp->next = NULL;
}

int main()
{
	Node *head = take_Input();

	if(isCircular(head)){
		cout << "List is circular " << endl;
	}
	else {
		cout << "List is not circular " << endl;
	}

	Node *startingNode = getStarting(head);
	cout << "Starting Node of the loop is " << startingNode->data << endl;

	if(detectLoop(head)){
		cout << "Loop exist " << endl;
	}
	else {
		cout << "Loop does not exist " << endl;
	}

	Node *detection = floydcycledetect(head);
	cout << "loop at the node : " << detection->data << endl;
	
	// print(head);

	return 0;
}