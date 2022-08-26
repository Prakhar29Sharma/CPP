#include<bits/stdc++.h>
using namespace std;

void test()
{
	int i, N, M, sum, candies;
	
	sum = 0;
	
	cin >> N >> M;
	
	int bags[N];
	
	for(i = 0; i < N; i++)
	{
		cin >> bags[i];
		sum += bags[i];
	}
	
	cout << sum % M << "\n";
	
	return;
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++)
	{
		test();
	}
	return 0;
}