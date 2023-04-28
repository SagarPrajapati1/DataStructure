#include <bits/stdc++.h>
using namespace std;

string removeReverse(string S)
{
	string A;
	A[0] = S[0];
	int cnt = 1;
	bool flag = false;

	for (int i = 1; i < S.length(); i++)
	{
		A[i] = S[i];
		if (flag == true)
		{
			cnt++;

			continue;

			for (int j = 0; j < cnt; j++)
			{
				int count = 0;
				if (count == 1)
					break;
				for (int k = 1; k < cnt; k++)
				{
					if (A[j] == A[k])
					{
						A[j] = NULL;
						count = count + 1;
						flag = true;
						break;
					}
				}
			}
		}
	}
}

int main()
{

	string S = "abab";

	return 0;
}