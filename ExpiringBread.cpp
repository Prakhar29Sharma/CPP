#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int N, M, K, x;
	scanf("%d %d %d", &N, &M, &K);
	x = N-M*K;
	
	if(x == 0 || x < 0)
	{
		printf("Yes\n");
	} else {
		printf("No\n");
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