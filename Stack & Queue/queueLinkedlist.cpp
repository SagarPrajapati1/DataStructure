#include <bits/stdc++.h>
using namespace std;

class Queue{
	public:
	int data;
	Queue *next;

	Queue(int data){
		this->data = data;
		this->next = NULL;
	}
};

Queue *enqueue(int data){

	Queue *front = NULL;
	Queue *rear = NULL;

	Queue *newElement = new Queue(5);
	// empty condition
	if(front == NULL){
		front = newElement;
		rear = newElement;
	}

	// if front is not NULL
	else {
		rear->next = newElement;
		rear = rear->next;
	}
	return front;
}
int main()
{
	Queue q(5);

	enqueue;

	return 0;
}