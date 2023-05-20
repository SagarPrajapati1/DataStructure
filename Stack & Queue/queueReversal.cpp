#include <bits/stdc++.h>
using namespace std;


// using stack
int queueReversal(queue<int> &q){
	
	// if queue is empty then return -1
	if(q.empty()){
		return -1;
	}

	stack<int> st;
	
	// put elements from queue to stack 
	while(!q.empty()){
		int val = q.front();
		q.pop();
		st.push(val);
	}

	// put elements from stack to queue
	while(!st.empty()){
		int val = st.top();
		st.pop();
		q.push(val);
	}
}

//using recursion

void ReverseQueue(queue<int> &q){

	//empty queue || base case
	if(q.empty()){
		//cout << "Queue is empty " << endl;
		return;
	}

	// recursive call

	//cout << "Inside Recusion " << endl;
	// put front element in side
	int val = q.front();
	q.pop();
	ReverseQueue(q);

	// when return then put that element in queue
	q.push(val);
}
void print(queue<int> q){

	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
}
int main()
{
	queue<int> q;
	q.push(2);
	q.push(4);
	q.push(6);
	q.push(8);
	q.push(10);

	queueReversal(q);
	print(q);

	ReverseQueue(q);
	print(q);

	return 0;
}