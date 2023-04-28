#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *next;

		//Constructor for create Node
		Node(int d) {
			this->data = d;
			this->next = NULL;
		}
};

Node* takeInput(){

	int d;
	cout << "Enter list elements : " << endl; 
	cin >>d;
	// assuming kist is empty so head is NULL
	Node *head = NULL;
	Node *tail = NULL;
	while(d != -1){
		
		Node *newNode = new Node(d);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}

		else{
			tail->next = newNode;
			tail = tail->next; // time complexity is O(n)
			
			
			/* // assuming list is not empty 
			Node *temp = head; // create a temp to traverse the list
			while(temp->next != NULL)  // it is taking n time for every node so we can reduce this time complexity
								// whole time complexity is O(n^2)
			{
				temp = temp->next;
			}
			temp->next = newNode; */ 
		}
		cin >> d;
	}
	return head;
}

bool isCircular(Node *head){
	
	// case -1 -> list is empty
	if(head == NULL){
		return false;
	}

	// optional case it is handeled by the case -3
	//case -2 -> list have only one node
	if(head->next == NULL){
		return false;
	}
	if(head -> next == head){
		return true;
	}

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




void InsertAtHead(Node *&head, int d) {
	Node *newNode = new Node(d);
	newNode->next = head;
	head = newNode;
}

void InsertAtTail(Node *&head, Node *&tail, int d){
	Node *newNode = new Node(d);
	tail = head;
	while(tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = newNode;
	tail = newNode;
}

// find the length of linked list
int getLength(Node *head){
	Node *temp = head;
	int cnt = 0;
	/* if(head == NULL){
		return 0;
	} */
	
	while(temp != NULL) {
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

Node* InsertAtIth(Node *head, int i, int d){

	Node *newNode = new Node(d);
	int cnt = 0;
	Node *temp = head;
	
	if(i == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}
	while(temp != NULL && cnt < i-1){
		temp = temp->next; 
		cnt++;
	}

	// here we r using an extra pointer  
	/* Node *a = temp->next;
	temp->next = newNode;
	newNode->next = a; */

	// above code and below code both are same 

	// not using any extra poitner
	if(temp != NULL){
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return head;
}

void deleteIthNode(Node* head, int i){
	if (head == NULL) {
		cout << "List khali h" << endl;
	}
	int cnt = 0;
	Node *temp = head;
	while(cnt < i - 1 ){
		temp = temp->next;
		cnt++;
	}
	Node *a = temp->next;
	temp->next = a->next;
	delete a;
}


void printIth(Node *head, int i, int len){
	if(i > len) {
		cout << "i ki value jyada h ";
	}
	int cnt = 0;
	Node *temp = head;
	while(cnt < i){
		temp = temp->next;
		cnt++;
	}

	cout << temp->data;
}

void print(Node *head) {

	if(head == NULL) {
		cout << "Entry krlo phle " << endl;
	}
	Node *temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	Node *head = takeInput();
	print(head);
	int len = getLength(head);
	cout << "Length of linked list is -> " << len << endl;

	if(isCircular(head)) {
		cout << "List is circular " << endl;
	}
	else {
		cout << "List is not circular " << endl;
	}

	/* int i, data;
	cout << "Enyter the value of i and data to be inserted : ";
	cin >> i >> data;
	head = InsertAtIth(head, i, data);
	print(head);
	cout << "Head is : -> " << head->data << endl;

	int j;
	cin >> j;
	printIth(head, j, len);
	cout << endl;

	int position;
	cout << "Enter the position to delete the node : ";
	cin >> position;
	deleteIthNode(head, position);
	cout << "After the deleting the node" << endl;
	print(head); */

	/*InsertAtHead(head, 1);
	print(head);
	cout <<"Head at positoin -> " << head->data << endl;
	Node *tail = NULL;
	InsertAtTail(head, tail, 6);
	print(head);
	int len2 = getLength(head);
	cout << "Length becomes -> " << len2 << endl;
	cout << "Tail at positon -> " << tail -> data << endl;

	 //Statically
	Node n1(1);
	Node *h1 = &n1;
	Node n2(2);
	h1->next = &n2;
	cout << n1.data << " " << n1.next->data;

	//dynamically
	Node *n3 = new Node(10);
	
	Node *head = n3;
	Node *n4 = new Node(20);
	n3->next = n4;
 */

	return 0;
}