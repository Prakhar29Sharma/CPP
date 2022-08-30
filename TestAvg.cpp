#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int A, B, C;
	int avg1, avg2, avg3;
	
	scanf("%d %d %d", &A, &B, &C);
	
	avg1 = (A+B)/2;
	avg2 = (B+C)/2;
	avg3 = (C+A)/2;
	
	if(avg1 < 35 || avg2 < 35 || avg3 < 35)
	{
		printf("Fail\n");
	}
	else
	{
		printf("Pass\n");
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