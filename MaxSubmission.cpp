#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int X, submissions;
	scanf("%d", &X);
	
	submissions = X*60/30;
	
	printf("%d\n", submissions);
	
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