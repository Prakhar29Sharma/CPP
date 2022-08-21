#include<bits/stdc++.h>

using namespace std;

void test()
{
	int K, N, balance, i;
	scanf("%d %d", &N, &K);
	char output[N];
	balance = K;
	for(i = 1; i <= N; i++)
	{
		int A;
		scanf("%d", &A);
		if(A > balance)
		{
			output[i-1] = '0';
		}
		else
		{
			output[i-1] = '1';
			balance = balance - A;
		}
	}
	printf("%s\n", output);
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T!=0)
	{
		test();
		T--;
	}
	return 0;
}
