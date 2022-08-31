#include<stdio.h>
#include<stdlib.h>

void test()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a == b)
	{
		printf("yes\n");
		exit(0);
	}
	else
	{
		if(a > b)
		{
			while(1)
			{
				a--;
				b++;
				if(a == b)
				{
					printf("yes\n");
					exit(0);
				}
				if(a < b)
					break;
			}
		}
		else 
		{
			while(1)
			{
				a++;
				b--;
				if(a == b)
				{
					printf("yes\n");
					exit(0);
				}
				if(a > b)
					break;
			}
		}
	}
	printf("no\n");
	return;
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T!=0)
	{
		test();
		T--;
	}
}
