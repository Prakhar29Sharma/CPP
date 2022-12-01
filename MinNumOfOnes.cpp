#include <iostream>
using namespace std;

// min number of ones 
// given an integer N, construct a binary string B = b1b2b3... such that max(bi, bi+1) = 1
// find minimum number of 1's in string

void test() {
    int N, count = 0;
    scanf("%d", &N);
    count = N/2;
    printf("%d\n", count);
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
