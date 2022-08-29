#include<bits/stdc++.h>
using namespace std;

void test()
{
	int X, cost;
	
	scanf("%d", &X);
	
	if(X <= 300)
	{
		cost = 300*10;
	}
	else
	{
		cost = X*10;
	}
	
	printf("%d\n", cost);
	
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