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
Node *getMid(Node *head){
	Node *slow = head;
	Node *fast = head->next;

	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node *merge(Node *left, Node *right){
	if (left == NULL){
		return right;
	}

	if(right == NULL)
		return left;

	Node *ans = new Node(-1);
	Node *temp = ans;

	while (left != NULL && right != NULL){
		if(left->data < right->data){
			temp->next = left;
			temp = left;
			left = left->next;
		}
		else {
			temp->next = right;
			temp = right;
			right = right->next;
		}
	}

	while(left != NULL){
		temp->next = left;
		temp = left;
		left = left->next;
	}

	while(right != NULL){
		temp->next = right;
		temp = right;
		right = right->next;
	}

	return ans->next; 
}

Node *mergeSort(Node *head){
	// base case
	if(head == NULL || head ->next == NULL){
		return head;
	}
	// break  into two parts
	Node *mid = getMid(head);

	Node *left = head;
	Node *right = mid->next;
	mid->next = NULL;

	//recursively calls to sort both halves
	left = mergeSort(left);
	right = mergeSort(right);

	//merge both left and right part
	Node *result = merge(left, right);

	return result;
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
	Node *head = takeInput();
	head = mergeSort(head);
	print(head);

	return 0;
}