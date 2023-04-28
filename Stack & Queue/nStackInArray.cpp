#include <bits/stdc++.h>
using namespace std;
class Stack{
	int *arr;
	int *next;
	int *top;
	int freespot;
	int N, S;

public:
	Stack(int s, int n){
		arr = new int[s];
		next = new int[s];
		top = new int[n];
		N = n;
		S = s;

		// initialize next;
		for (int i = 0; i < N; i++){
			next[i] = i + 1;
		}

		// last block of next
		next[S - 1] = -1;

		// initialize top
		for (int i = 0; i < N; i++){
			top[i] = -1;
		}
		freespot = 0;
	}

	bool push(int x, int m){
		
		if(freespot == -1) {
			return false;
		}

		// find index
		int index = freespot;

		// insert element
		arr[index] = x;

		// update free spot
		freespot = next[index];
		
		//update next
		next[index - 1] = top[m - 1];
		
		//update top
		top[m - 1] = index;

		return true;
	}

	int pop(int m){

		//check underflow
		if(top[m-1] == -1){
			return -1;
		}


		int index = top[m - 1];

		top[m - 1] = next[index];
		
		next[index] = freespot;

		return arr[index];
	}
};

int main()
{


return 0;
}