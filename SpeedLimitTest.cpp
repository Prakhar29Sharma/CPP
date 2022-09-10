#include <iostream>
using namespace std;

void test()
{
    int A, X, B, Y; 
    double speed_alice, speed_bob;
    scanf("%d %d %d %d", &A, &X, &B, &Y);
    speed_alice = (double)A/X;
    speed_bob = (double)B/Y;
    if(speed_alice == speed_bob)
    {
        printf("EQUAL\n");
    }
    else if(speed_alice > speed_bob)
    {
        printf("ALICE\n");
    }
    else
    {
        printf("BOB\n");
    }
}

int main() {
	int T;
	scanf("%d", &T);
	while(T!=0)
	{
	    test();
	    T--;
	}
	return 0;
}
