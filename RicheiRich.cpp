#include <iostream>
using namespace std;

/*
Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth AA billion dollars and have no liabilities. He aims to increase his assets by XX billion dollars per year.

Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least BB billion dollars. How many years will it take Chef to reach his goal if his value increases by XX billion dollars each year?
*/

void test() {
    int A, B, X, year_count = 0;
    scanf("%d %d %d", &A, &B, &X);
    while(A < B) {
        year_count+=1;
        A = A + X;
    }
    printf("%d\n", year_count);
}

int main() {
	int T;
	scanf("%d", &T);
	while(T!=0) {
	    test();
	    T--;
	}
	return 0;
}
