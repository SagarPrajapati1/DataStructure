#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *create()
{
	Node *head = NULL;
	int data;
	cin >> data;

	Node *tail = NULL;

	while (data != -1)
	{
		Node *newNode = new Node(data);
		// if head is NULL
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		// if list have an element
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

Node *reverseList(Node *head)
{

	// if list is empty
	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return head;
	}

	// list is not empty

	Node *curr = head;
	Node *prev = NULL;
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

void print(Node *head)
{

	if (head == NULL)
	{
		cout << "list khali h " << endl;
		return;
	}

	Node *temp = head;

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *modifyList(Node *head)
{
	Node *fast = head;
	Node *slow = head;
	Node *prev = NULL;

	// get mid of list
	while (fast && fast->next)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}

	cout << "mid of the list  " << slow->data << endl;

	// break the list in two parts
	prev->next = NULL;

	// reverse the second half of the list from mid to end
	Node *RList = reverseList(slow);

	slow = RList;

	Node *temp = head;

	while (temp != NULL && RList != NULL)
	{
		int x = temp->data;
		temp->data = RList->data - temp->data;
		RList->data = x;
		temp = temp->next;
		RList = RList->next;
	}

	RList = reverseList(slow);
	prev->next = RList;

	return head;
}

int main()
{
	Node *head = create();
	print(head);

	head = modifyList(head);
	print(head);
	// Node *reverseHead = reverseList(head);
	// print(reverseHead);

	// print(head);

	return 0;
}