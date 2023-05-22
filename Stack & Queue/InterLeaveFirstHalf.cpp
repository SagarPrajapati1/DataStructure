#include <bits/stdc++.h>
using namespace std;

// using only stack 
void InterLeaveHalf(queue<int> &q){

	//create a stack
	stack<int> s;

	int half = q.size() / 2;

	// firsy half of queue in stack
	for (int i = 0; i < half; i++)
	{
		int val = q.front();
		q.pop();
		s.push(val);
	}

	// put elements in queue from stack
	while(!s.empty()){
		int val = s.top();
		s.pop();
		q.push(val);
	}

	// first half of queue pop and again push
	for(int i = 0; i < half; i++)
	{
		int val = q.front();
		q.pop();
		q.push(val);
	}

	// firsy half of queue in stack
	while(half--){
		int val = q.front();
		q.pop();
		s.push(val);
	}

	// now interleave the elements
	while(!s.empty()){

		//stack to queue
		int val = s.top();
		s.pop();
		q.push(val);

		// queue to queue (front to end)
		val = q.front();
		q.pop();
		q.push(val);
	}
}

void interLeaveHalf(queue<int> &q){

	int halfsize = q.size() / 2;

	queue<int> newQ;

	// put half of the elements in new queue
	while(halfsize--){
		int val = q.front();
		q.pop();
		newQ.push(val);
	}

	// put elements from newQ into queue and interleave
	while(!newQ.empty()) {
		int val = newQ.front();
		newQ.pop();

		q.push(val);
		val = q.front();
		q.pop();
		q.push(val);
	}
}

int main()
{
	queue<int>q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);
	q.push(16);
	q.push(17);
	q.push(18);
	q.push(19);
	q.push(20);

	InterLeaveHalf(q);
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}