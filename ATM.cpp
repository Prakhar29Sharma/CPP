#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int X;
	float charge, account_balance;
	charge = 0.50;
	
	scanf("%d %f", &X, &account_balance);
	
	if(X < account_balance || X == account_balance)
	{
		if(X % 5 == 0)
		{
			account_balance = account_balance - 0.5 - X;
		}
		printf("%f\n", account_balance);
	} else {
		printf("%f\n", account_balance);
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