#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int A, B, C, D, D1, D2;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	D1 = A - C;
	D2 = B - D;
	if(D1 < D2)
	{
		printf("First\n");
	} 
	else if(D2 < D1)
	{
		printf("Second\n");
	}
	else
	{
		printf("Any\n");
	}
	return;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++)
	{
		test();
	}
	return 0;
}