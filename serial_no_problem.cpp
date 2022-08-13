#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	string seriel_no;
	cin >> seriel_no;
	int arr[2][10];
	int k;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(i == 0)
			{
				arr[i][j] = j;
			} else {
				arr[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		int count = 0,  target_element;
		target_element = arr[0][i];
		for(int j = 0; j < seriel_no.length(); j++)
		{
			if(target_element == seriel_no[j]- '0')
			{
				count+=1;
			}
		}
		arr[1][i] = count;
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", arr[1][i]);
	}
	return;
}

int main()
{
	test();
	return 0;
}