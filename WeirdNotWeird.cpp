#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int n;
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("Not Weird\n");
	} else {
		printf("Weird\n");
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