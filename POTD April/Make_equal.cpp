#include <bits/stdc++.h>
using namespace std;

int makeEqual(int n){
	int ans = 0;
	for (int i = 0; i < n / 2; i++){
		ans += (n - ((2 * i) + 1));
	}
	return ans;
}
int makeEqu(int n){
	return n / 2 * (n + 1) / 2;
}

int main()
{

	int ans = makeEqual(3);
	cout << ans << endl;
	cout << endl << makeEqu(3) << endl;
	
	return 0;
}