#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d\n", (x*5 + y*10)/z);
	
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

/*
Chef has XX 5 rupee coins and YY 10 rupee coins. 
Chef goes to a shop to buy chocolates for Chefina where each chocolate costs ZZ rupees. 
Find the maximum number of chocolates that Chef can buy for Chefina
*/