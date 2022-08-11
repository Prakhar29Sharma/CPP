#include<bits/stdc++.h>
using namespace std;

void test()
{
	//code here
	int x,y,count;
	scanf("%d %d", &x, &y);
	
	count = 0;
	
	if(x != y)
	{
		while(x != y)
		{
			if(y > x)
			{
				count+=1;
				x++;
			} else {
				count+=1;
				x--;
			}
		}
	}
	
	printf("%d\n", count);
	
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

/*
Chef is watching TV. 
The current volume of the TV is XX. Pressing the volume up button of the TV remote increases the volume by 11 while pressing the volume down button decreases the volume by 11. Chef wants to change the volume from XX to YY.
 Find the minimum number of button presses required to do so.
*/