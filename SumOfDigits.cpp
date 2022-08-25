#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int n, sum, rem;
	sum = 0;
	
	scanf("%d", &n);
	
	while(n > 0)
	{
		rem = n % 10;
		sum += rem;
		n /= 10;
	}
	
	printf("%d\n", sum);
	
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