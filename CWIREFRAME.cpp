#include <iostream>
using namespace std;

void test()
{
    int N, M, X,cost;
    scanf("%d %d %d", &N, &M, &X);
    cost = 2*(M+N)*X;
    printf("%d\n", cost);
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
