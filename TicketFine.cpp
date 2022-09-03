#include<iostream>

using namespace std;

void test()
{
	int X, P, Q, fine;
	scanf("%d %d %d", &X, &P, &Q);
	fine = (P-Q)*X;
	printf("%d\n", fine);
	return;
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
