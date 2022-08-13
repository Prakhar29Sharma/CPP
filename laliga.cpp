#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int X, Y;
	
	scanf("%d %d", &X, &Y);
	
	if(X == 0 || Y == 0)
	{
		printf("NO\n");
	} else {
		if(X == Y)
		{
			printf("YES\n");
		} else {
			printf("NO\n");
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