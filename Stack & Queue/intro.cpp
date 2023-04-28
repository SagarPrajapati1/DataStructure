#include <bits/stdc++.h>
using namespace std;

class Stack{
	
	//properties
	public:
		int *arr;
		int top;
		int size;
	
	//behaviour
	Stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element){
		
		if(size - top > 1){
			top++;
			arr[top] = element;
		}
		else {
			cout << "Stack Overflow" << endl;
		}
	}

	void pop(){
		if (top >= 0) {
			top--;
		}
		else {
			cout << "Stack Underflow" << endl;
		}
	}
	int peak() {
		if(top >= 0 && top < size)
			return arr[top];

		else {
			cout << "Stack is empty "<< endl;
			return -1;
		}
	}
	bool isEmpty() {
		if(top == -1){
			return true;
		}
		else {
			return false;
		}

	}
};

int main()
{

	Stack st(5);

	st.push(22);
	st.push(43);
	st.push(44);
	st.push(22);
	st.push(43);
	st.push(44);
	cout << st.peak() << endl;
	
	st.pop();

	cout << st.peak() << endl;
	
	st.pop();

	cout << st.peak() << endl;

	st.pop();

	cout << st.peak() << endl;
	if(st.isEmpty()){
		cout << "Stack is empty" << endl;
	}
	else {
		cout << "Stack is not empty" << endl;
	}
	/*  // creation of stack
		stack<int> s;
		//push operation
		s.push(1);
		s.push(2);
		s.push(3);

		//pop operation
		s.pop();

		cout << "Printing top element " << s.top() << endl;


		// empty check
		if(s.empty())
			cout << " stack is stack empty " << endl;
		else
			cout << "stack is not empty " << endl;

		cout << "size of the stack " << s.size()<< endl;
	 */
	return 0;
}