#include <iostream>
using namespace std;

void test()
{
    int W, X, Y, Z, balance;
    scanf("%d %d %d %d", &W, &X, &Y, &Z);
    balance = W + X*Z - Y*Z;
    printf("%d\n", balance);
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
