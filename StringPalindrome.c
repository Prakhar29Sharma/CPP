#include<stdio.h>

int main()
{
	char str[] = "level";
	int i, j, len;
	int isPalindrome;
	isPalindrome = 1;
	
	len = 5;
	printf("len : %d\n", len);
	for(i = 0, j = len - 1 ; i < len/2; i++, j--)
	{
		if(str[i]!=str[j])
		{
			isPalindrome = 0;
			break;
		}
	}
	
	if(isPalindrome)
	{
		printf("Palindrome!\n");
	} else {
		printf("Not a Palindrome!\n");
	}
}