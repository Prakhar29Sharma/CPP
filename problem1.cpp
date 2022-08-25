#include<bits/stdc++.h>
using namespace std;

/* takes T test cases and then takes two input and display sum of them */

void test()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);	
	return;
}

int main(){
	int T, i;
	scanf("%d", &T);
	for(i = 0; i < T; i++)
	{
		test();
	}
	return 0;
}