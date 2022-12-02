#include <iostream>
using namespace std;

void test() {
    int D, L, R;
    scanf("%d %d %d", &D, &L, &R);
    if(D > R) {
        printf("Too Late\n");
    } else if (D < L) {
        printf("Too Early\n");
    } else {
        printf("Take second dose now\n");
    }
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
