#include <bits/stdc++.h>
using namespace std;

void ReverseFirstKelements(queue<int> &q, int k){

	stack<int> st;

	//step 1 fetch first k elements from queue and put in tha stack
	for (int i = 0; i < k; ++i){
		int val = q.front();
		q.pop();
		st.push(val);
	}

	// fetch elememts from stack and put in the queue

	while(!st.empty()){
		int val = st.top();
		st.pop();
		q.push(val);
	}

	// fetch n-k elements from queue and push_back into the queue
	for (int i = 0; i < q.size() - k; ++i){
		int val = q.front();
		q.pop();
		q.push(val);
	}
}

int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	ReverseFirstKelements(q, 3);

	while(!q.empty()){
		cout << q.front() << "  ";
		q.pop();
	}

	cout << endl;

	return 0;
}