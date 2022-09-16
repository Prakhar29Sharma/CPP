#include <iostream>
using namespace std;

void test()
{
    int X, Y, pricepool;
    scanf("%d %d", &X, &Y);
    pricepool = 10*X + 90*Y;
    printf("%d\n", pricepool);
    return;
}

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T != 0)
	{
	    test();
	    T--;
	}
	return 0;
}
