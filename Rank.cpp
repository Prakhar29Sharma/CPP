#include <iostream>
using namespace std;

int main() {
	int R;
	// R -> rank of student 
	scanf("%d", &R);
	if(R <= 50 && R >= 1)
	{
	    printf("%d\n", 100);
	}
	else if(R <= 100 && R >= 51)
	{
	    printf("%d\n", 50);
	}
	else
	{
	    printf("%d\n", 0);
	}
	
	return 0;
}
