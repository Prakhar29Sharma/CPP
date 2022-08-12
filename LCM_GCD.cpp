#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int A, B, LCM, max, GCD, i;
	scanf("%d %d", &A, &B);
	
	LCM = 0;
	
	if(A > B)
	{
		max = A;
	} else 
	{
		max = B;
	}
	
	i = max;
	
	while(1)
	{
		if(i % A == 0 && i % B == 0)
		{
			LCM = i;
			break;
		}
		i++;
	}
	
	GCD = A*B/LCM;
	
	printf("%d %d\n", GCD, LCM);
	
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