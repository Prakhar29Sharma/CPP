#include<iostream>

using namespace std;

/*
A Rule of Divisibility (Codewar Problem)
*/

int pow(int a,int b);
bool find(int *arr, int target, int len);
void display(int *arr, int len);
int sum(int *arr1, int*arr2, int len);

int main() {
	int i, j;
	int array[100];
	int array_p = -1;
	i = 0;
	cout << "Enter the divisor: ";
	cin >> j;
	while (i<=100) {
		int temp;
		temp = pow(10,i)%13;
		if(find(array,temp,array_p+1)) {
			break;
		} else {
			array_p++;
			array[array_p] = temp;
		}
		cout << "10^"<< i << " % "<< j << " = " << pow(10,i)%13 << endl; 
		i++;
	}

	for (int i=0; i < array_p+1; i++) {
		array[i + array_p+1] = array[i];
	}

	cout << "Array of remainder : ";

	display(array, array_p+1);

	int num, temp, digits_in_reverse[100];
	int digits_in_reverse_p = -1;
	cout << "Enter a number: ";
	cin >> num;
	temp = num;
	while (temp!=0) {
		int digit = temp%10;
		digits_in_reverse_p++;
		digits_in_reverse[digits_in_reverse_p] = digit;
		temp/=10;
	}
	
	display(digits_in_reverse, digits_in_reverse_p+1);

	// cout << sum(array, digits_in_reverse, digits_in_reverse_p+1) << endl;

	do {

		num = sum(array, digits_in_reverse, digits_in_reverse_p+1);
		temp = num;
		digits_in_reverse_p = -1;

		while (temp!=0) {
			int digit = temp%10;
			digits_in_reverse_p++;
			digits_in_reverse[digits_in_reverse_p] = digit;
			temp/=10;
		}

		display(digits_in_reverse, digits_in_reverse_p+1);

		cout << sum(array, digits_in_reverse, digits_in_reverse_p+1) << endl;



	} while (num != sum(array, digits_in_reverse, digits_in_reverse_p+1));

	cout << num << "%" << j << " = " << num%j << endl;

	cout << "The remainder will be the same as for the initial number entered by the user!" << endl;

	return 0;
}

int sum(int *arr1, int*arr2, int len) {
	int mult[100];
	int sum = 0;
	int mult_p = -1;
	for (int i = 0; i < len; i++) {
		mult_p++;
		mult[mult_p] = arr1[i]*arr2[i];
		sum+=mult[mult_p];
	}
	cout << "product of remainders and reversed number digits: " << endl; 
	display(mult, len);
	cout << "sum: " << sum<<endl;
	return sum;
}

void display(int *arr, int len) {
	for (int i=0; i<len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool find(int *arr, int target, int len) {
	for(int i = 0; i < len; i++) {
		if (arr[i] == target) {
			return true;
		}
	}
	return false;
}

int pow(int a,int b) {
	int result = 1;
	if(b==0) {
		return 1;
	}
	else if(b==1) {
		return a;
	}
	else {
		for(int i = 0; i < b; i++) {
			result*=a;
		}
	}
	return result;
}