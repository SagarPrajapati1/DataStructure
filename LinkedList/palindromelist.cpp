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
		if(head == NULL){
			head - newNode;
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


/* bool isPalindrome(vector<int>arr){
	
	cout << "isPalindrome" << endl;
	int n = arr.size();
	int s = 0;
	int e = n - 1;
	while(s <= e){
		if(arr[s] != arr[e]){
			return false;
		}
		s++;
		e--;
	}
	return true;
} */
Node *getMiddle(Node *head){
	Node *slow = head;
	Node *fast = head->next;
	while(fast != NULL && fast -> next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

Node *reversed(Node *head){
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
bool isPalindrome(Node *head){
	if(head ->next == NULL){
		return true;
	}
	// find middle
	Node *middle = getMiddle(head);
	//reverse the linked list after middle element
	Node *temp = middle->next;
	middle->next = reversed(temp);

	//compare both heads
	Node *head1 = head;
	Node *head2 = middle->next;

	while(head2 != NULL){
		if(head1->data != head2->data){
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	//again reverse LL
	temp = middle->next;
	middle->next = reversed(temp);
	return true;
}

int main()
{
	Node *head = takeInput();

	vector<int> arr;
	
	Node *temp = head;
	while(temp != NULL){
		arr.push_back(temp->data);
		temp = temp->next;
	}

	cout << isPalindrome(head) << endl;
	/* if(isPalindrome(arr)){
		cout << "list is Palindrome." << endl;
	}
	else {
		cout << "list is not Palindrome." << endl;
	} */

	return 0;
}