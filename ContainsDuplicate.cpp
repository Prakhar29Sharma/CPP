#include<bits/stdc++.h>
using namespace std;

bool test()
{
	//code here
	int nums[] = {1,2,3,1};
	int len = 4;
	int i, j;
	int isDuplicate = 0; // false
	
	for(i = 0; i < len-1; i++)
	{
		for(j = i+1; j < len; j++)
		{
			if(nums[i] == nums[j])
			{
				isDuplicate = 1; // true
				break;
			}
		}
	}
	
	return isDuplicate;
}

int main(){
	
	int isDuplicate;
	
	isDuplicate = test();

	
	if(isDuplicate == 1)
	{
		printf("true\n");
	}
	else 
	{
		printf("false\n");
	}
	return 0;
}