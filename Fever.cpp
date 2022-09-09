#include <iostream>
using namespace std;

void test()
{
    int X;
    scanf("%d", &X);
    if(X > 98)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T!=0)
	{
	    test();
	    T--;
	}
	return 0;
}

