#include<iostream>

using namespace std;

void test(int A, int B, int X)
{
    if(A == B)
    {
        printf("YES\n");
    }
    else if(A > B)
    {
        A = A-X;
        B = B+X;
        if(A < B)
        {
            printf("NO\n");
            return;
        }
        test(A,B,X);
    }
    else
    {
        A = A+X;
        B = B-X;
        if(A > B)
        {
            printf("NO\n");
            return;
        }
        test(A,B,X);
    }
}

int main()
{
    int T;
    int A, B, X;
    scanf("%d", &T);
    while(T!=0)
    {

        scanf("%d %d %d", &A, &B, &X);
        test(A, B, X);
        T--;
    }
    return 0;
}
