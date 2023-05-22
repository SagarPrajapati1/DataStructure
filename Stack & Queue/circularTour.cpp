#include <bits/stdc++.h>
using namespace std;

int CircularTour(int petrol[], int distance[], int N){
	int balance = 0;
	int deficit = 0;
	int start = 0;

	int rear = 0;
	int front = 0;

	for (int i = 0; i < N; ++i){
		balance += petrol[i] - distance[i];

		if(balance >= 0){
			rear++;
		}

		else {

			deficit += balance;
			balance = 0;
			front = rear + 1;
			rear = front;
			start = front;
		}

		
	}
	if(balance + deficit >= 0)
		return start;
	return -1;
}


int circularTour(int petrol[], int distance[], int N){
	int balance = 0;
	int deficit = 0;
	int start = 0;

	for (int i = 0; i < N; ++i){
		
		balance += petrol[i] - distance[i];
		if(balance < 0){
			
			deficit += balance;
			balance = 0;
			start = i + 1;
		}
	}

	if(balance + deficit >= 0){
		return start;
	}
	else 
		return -1;
}

int main()
{
	int petrol[] = {4, 6, 7, 4};
	int distance[] = {6, 5, 3, 5};

	int ans = CircularTour(petrol, distance, 4);
	cout << ans << endl;
	return 0;
}