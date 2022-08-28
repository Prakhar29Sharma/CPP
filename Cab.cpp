#include<bits/stdc++.h>
using namespace std;

void test()
{
	int X,Y;
		
		scanf("%d %d", &X, &Y);
		
		if(X > Y)
		{
			printf("SECOND\n");
		}
		else if(X < Y)
		{
			printf("FIRST\n");
		}
		else
		{
			printf("ANY\n");
		}
}

int main(){
	
	int T;
	
	scanf("%d", &T);
	
	do{
		test();
		T--;
	} while(T!=0);
	
	return 0;
}
