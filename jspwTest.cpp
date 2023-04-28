#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
	int data;
	Node *next;

	Node(int d)
	{
		this->data = d;
		this->next = NULL;
	}
};
Node *take_Input()
{
	int d;
	cout << "Enter the data : ";
	cin >> d;
	Node *head = NULL;
	Node *tail = NULL;
	while (d != -1)
	{ // if data is -1 the it means that user don't want to insert the data
		// -1 is not includeing the node data
		Node *newNode = new Node(d);
		if (head == NULL)
		{
			head = newNode;
			// updating tail as newNode becoz their is only one node in the linked list
			// so head and tail is pointing to the same node
			tail = newNode;
		}
		else
		{
			// time complexity is O(1) for every Node
			//  if we use a loop for inserting the new node the it will take O(n) time for every Node
			// so total time complexity for inserting a node is ( n^2)
			tail->next = newNode;
			tail = tail->next;
		}

		cin >> d;
	}
	return head;
}

Node *Reverse_List(Node *head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	Node *prev = NULL;
	Node *curr = head;
	Node *forward = NULL;
	while (curr != NULL)
	{
		forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	head = prev;
	return head;
}

void ReverseRecursive(Node *&head, Node *curr, Node *prev)
{
	if (curr == NULL)
	{
		head = prev;
		return;
	}
	Node *forward = curr->next;
	ReverseRecursive(head, forward, curr);
	curr->next = prev;
}
Node *Reverse(Node* head){
	Node *curr = head;
	Node*prev = NULL;
	ReverseRecursive(head, curr, prev);

	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{	
	int t;
	cin >> t;
	int d;
	for(int i = 0; i < t; i++){
		cin >> d;
	}
	

	Node *head = take_Input();
	print(head);
	head = Reverse_List(head);
	cout << endl;
	print(head);
	cout << endl << endl;

	head = Reverse(head);
	print(head);
	return 0;
}