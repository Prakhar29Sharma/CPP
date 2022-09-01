#include <iostream>
using namespace std;

void test()
{
    int X,Y,Z, total_credit;
    scanf("%d %d %d", &X, &Y, &Z);
    total_credit = X*4 + Y*2 + 0*Z;
    printf("%d\n", total_credit);
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

