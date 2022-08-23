#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	
	scanf("%d", &T);
	
	do{
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
		
		T--;
	} while(T!=0);
	
	return 0;
}