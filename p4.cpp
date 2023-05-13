#include<iostream>

using namespace std;

int no_of_digits(int num);

int main() {
	
	int num, len;
	// take number as input
	cout << "Enter a number: " << endl;
	cin >> num; 
	// compute no of digits
	len = no_of_digits(num);

	// create a array to store the digits of the number
	int digits[len];
	int i = 0, temp = num;
	
	while (temp!=0) {
		digits[i++] = temp%10;
		temp/=10;
	}
	
	// sort the array in descending order
	for(i = 0; i < len; i++) {
		for(int j = i+1; j < len; j++) {
			if (digits[i] < digits[j]) {
				int t;
				t = digits[i];
				digits[i] = digits[j];
				digits[j] = t;
			}
		}
	}

	int largestNumber = 0;

	// compute the largest number
	for(i = 0; i < len; i++) {
		largestNumber = largestNumber*10+digits[i];
	}

	// displaying the output
	cout << "larget number possible by using digits of input number is " << largestNumber << endl;

	return 0;
}

// calculates number of digits for a input number
int no_of_digits(int num) {
	int count = 0;
	while (num!=0) {
		count++;
		num/=10;
	}
	return count;
}