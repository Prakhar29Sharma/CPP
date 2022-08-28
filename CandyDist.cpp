#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int N, M;
	
	scanf("%d %d", &N, &M);
	
	if((N/M)%2 == 0 && N%M == 0)
	{
		printf("%s\n", "Yes");
	} 
	else
	{
		printf("%s\n", "No");
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