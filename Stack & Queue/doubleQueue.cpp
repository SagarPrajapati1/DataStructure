#include <iostream>
#include <queue>
using namespace std;

class doublyQueue {
	int *arr;
	int size;
	int front;
	int rear;

	public:
		bool isfull(){
			if((front == 0 && rear == size -1) || (front != 0 && (rear == front -1 ) % size - 1)) {
				return true;
			}
			else
				return false;
	}

	bool isEmpty() {
		if(front == -1) {
			return true;
		}
		else
			return false;
	}

	int getRear(){
		if(isEmpty) {
			return -1;
		}
		else {
			return arr[rear];
		}
	}

	int getFront(){
		if(isEmpty){
			return -1;
		}
		else {
			return arr[front];
		}
	}

	bool pushFront(int data){
		if(isfull){
			return false;
		}
		else if (isEmpty()){
			front = rear = 0;
		}
		else if(front == 0 && rear != size -1){
			front = size - 1;
		}
		else {
			front--;
		}

		arr[front] = data;
		return true;
	}

	bool pushRear(int data){
		if(isfull){
			return false;
		}
		else if(isEmpty()){
			front = rear = 0;
		}
		else if(rear == size - 1 && front != 0){
			rear = 0;
		}
		else {
			rear++;
		}
		arr[rear] = data;
		return true;
	}

	int popFront(int data){
		if(isEmpty()){
			cout << "Queue is empty " << endl;
			return -1;
		}

		int ans = arr[front];
		arr[front] = -1;

		if(front == rear) { // single element

			front = rear = -1;
		}
		else if(front == size -1) {
			front = 0;
		}
		else {
			front++;
		}

		return ans;
	}

	int popRear(int data){
		if(isEmpty()){
			cout << "Queue is empty " << endl;
			return -1;
		}

		int ans = arr[rear];
		arr[rear] = -1;

		if(front == rear) { // single element

			front = rear = -1;
		}
		else if(rear == 0) {
			rear = size - 1;
		}
		else {
			rear--;
		}

		return ans;
	}
};

int main () {

	return 0;
}