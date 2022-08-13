#include<iostream>

using namespace std;

float area_circle(float r)
{
    const float PI = 3.14;
    return PI*r*r;
}

int main()
{
    float radius;
    cout << "Enter radius of circle : ";
    cin >> radius;
    printf("Area of Circle : %f\n", area_circle(radius));
    return 0;
}
