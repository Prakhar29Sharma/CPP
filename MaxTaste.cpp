#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int A, B, C, D;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	if(A > B)
	{
		if(C > D)
		{
			printf("%d\n", A+C);
		} else {
			printf("%d\n", A+D);
		}
	} else {
		if(C > D)
		{
			printf("%d\n", B + C);
		} else {
			printf("%d\n", B + D);
		}
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