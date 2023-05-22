#include <bits/stdc++.h>
using namespace std;

class kQueue
{
public:
	int *arr;
	int *front;
	int *rear;
	int size;
	int *next;
	int k;
	int freespot;

	kQueue(int s, int k)
	{
		this->k = k;
		this->size = s;

		arr = new int[size];
		next = new int[size];
		front = new int[k];
		rear = new int[k];

		// initializing the front and rear
		for (int i = 0; i < k; ++i)
		{
			front[i] = -1;
			rear[i] = -1;
		}

		// initializing next array
		for (int i = 0; i < size; ++i)
		{
			next[i] = i + 1;
		}
		next[size - 1] = -1;
		freespot = 0;
	}

	void enqueue(int data, int qn)
	{

		// step 1 stack is full
		if (freespot == -1)
		{
			cout << "queue is full" << endl;
			return;
		}

		// find index where element tp be insert
		int index = freespot;

		// update freespot
		freespot = next[index];

		// step 2 single element
		if (front[qn - 1] == -1)
		{
			front[qn - 1] = index;
		}

		else
		{
			// link new element to the prev element
			next[rear[qn - 1]] = index;
		}

		//update next
		next[index] = -1;
		
		//update rear
		rear[qn - 1] = index;

		//push element
		arr[index] = data;
	}

	int dequeue(int qn){

		//underflow
		if(front[qn-1] == -1){
			cout << "Underflow" << endl;
			return -1;
		}

		//find index
		int index = front[qn - 1];

		//update front
		front[qn - 1] = next[index];

		//update next
		next[index] = freespot;

		//update freespot
		freespot = index;

		return arr[index];
	}
};

int main()
{
	kQueue q(10, 3);

	q.enqueue(5, 1);
	q.enqueue(6, 1);
	q.enqueue(8, 2);
	q.enqueue(7, 1);
	q.enqueue(9, 2);

	cout << q.dequeue(1) << endl;
	cout << q.dequeue(2) << endl;
	cout << q.dequeue(1) << endl;
	cout << q.dequeue(1) << endl;
	cout << q.dequeue(1) << endl;
	return 0;
}