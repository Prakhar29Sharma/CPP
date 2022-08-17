#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int X, Y, Z, total;
	
	scanf("%d %d %d", &X, &Y, &Z);
	
	total = X;
	total = total - Y;
	total = total + Z;
	printf("%d\n", total);
	
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