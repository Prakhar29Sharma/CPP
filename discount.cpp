/*
Problem
Alice buys a toy with a selling price of 100 rupees. 
There is a discount of x percent on the toy. 
Find the amount Alice needs to pay for it.
*/

#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int p = 100;
	int d;
	scanf("%d", &d);
	printf("%d\n", p-d);
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