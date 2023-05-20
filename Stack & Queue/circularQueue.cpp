#include<iostream>
#include<queue>
using namespace std;

class circularQueue {

	int *arr;
	int size;
	int front;
	int rear;

	public:
	circularQueue(int n){
		size = n;
		arr = new int[size];
		front = rear = -1;
	}

	bool enqueue(int data){

		if((front == 0 && rear == size -1) || (rear == (front -1) % size -1)){
			cout << "Queue is full";
			return false;
		}

		else if(front == -1){ // first element
			front = 0;
			rear = 0;
			arr[rear] = data;
		}

		else if (rear = size - 1 && front != 0) { // front in between not at starting  
			rear = 0;
			arr[rear] = data;
		}
		else{
			rear++;
			arr[rear] = data;
		}
		return true;
	}

	int dequeue(){

		if(front == -1){
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
};

int main() {

	circularQueue q(5);
	q.enqueue(5);

	int ele = q.dequeue();
	cout << "delete element is " << ele << endl;

	return 0;
}