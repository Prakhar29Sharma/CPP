#include <iostream>
using namespace std;

void test()
{
    int K, X, days_remaining;
    scanf("%d %d", &K, &X);
    days_remaining = K*7 - X;
    printf("%d\n", days_remaining);
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

