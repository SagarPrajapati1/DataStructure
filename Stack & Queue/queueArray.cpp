#include <iostream>
#include<queue>
using namespace std;

class Queue {
	int *arr;
	int front;
	int rear;
	int size;

	public:
	Queue(){
		size = 100000;
		arr = new int[size];
		front = 0;
		rear = 0;
	}

	bool is_empty(){
		if(front == rear) {
			return true;
		}
		else {
			return false;
		}
	}

	void enQueue (int element){
		if(rear == size){
			cout << "Queue is full " << endl;
		}
		else {
			arr[rear] = element;
			rear++;
		}
	}

	int deQueue(){
		if(front == rear){
			return -1;
		}
		else {
			int ans = arr[front];
			arr[front] = -1;
			front++;
			if(front == rear) {
				front = 0;
				rear = 0;
			}
			return ans;
		}
	}

	int frontEle(){
		if(front == rear) {
			return -1;
		}
		else {
			return arr[front];
		}
	}

};

int main() {

	Queue q;
	q.enQueue(5);
	cout << "front element is : " << q.frontEle() << endl;

	q.enQueue(41);
	q.enQueue(20);

	//cout << "Size of the Queue is : " << q.size() << endl;
	cout<< "Before deleting the element front of the queue is " << q.deQueue() << endl;


	if(q.is_empty()){
		cout << "Queue is empty " << endl;
	}
	else {
		cout << "Queue is not empty" << endl;
	}

	cout << "front element is " << q.frontEle() << endl;

	// // create a queue using stl
	// queue<int> q;

	// // insert element
	// q.push(14);
	// cout << "front of queue is : " << q.front() << endl;

	// q.push(25);
	// cout << "front of queue is : " << q.front() << endl;

	// q.push(32);
	// cout << "front of queue is : " << q.front() << endl;

	// // size of queue
	// cout << "Size of the queue is : " << q.size() << endl;

	// // delete element
	// q.pop();
	// cout << "Size of the queue is : " << q.size() << endl;

	// q.pop();
	// cout << "Size of the queue is : " << q.size() << endl;

	// q.pop();
	// cout << "Size of the queue is : " << q.size() << endl;

	// if(q.empty()) {
	// 	cout << "Queue is empty " << endl;
	// }
	// else {
	// 	cout << "Queue is not empty" << endl;
	// }

	return 0;
}