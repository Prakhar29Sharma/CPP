/*
Squared string problem
*/

#include<iostream>

using namespace std;

int pow(int a, int b);

int main() {

	// input string
	string text;
	cout << "Enter a text: " << endl;
	cin >> text;
	cout << "length: " << text.length() << endl;

	// check for n for which n*n is closer to length of text and greater than length of text
	int i = 1;
	while (pow(i,2) < text.length()) {
		i++;
	}
	cout << "value of i : " << i << endl;

	// appending X such that length becomes n*n
	int len = text.length();
	for (int j = 0; j < pow(i,2)-len; j++) {
		text+="X";
	}
	cout << "new text : " << text << endl;
	cout << "new length : " << text.length() << endl; 

	// converting string to sqaure string
	int j = 0;
	int k = 0;
	char text_matrix[i][i];
	int count = 0;
	for(int k1 = 0; k1 < i; k1++) {
		for(int k2 =0; k2 < i; k2++) {
			text_matrix[k1][k2] = text[count];
			count++;
		}
	}

	// displaying square matrix
	for(int k1=0; k1<i; k1++) {
		for(int k2=0; k2<i; k2++) {
			cout << text_matrix[k1][k2] << " ";
		}
		cout << endl;
	}

	cout << endl;

	// rotating matrix by 90 degree clockwise

	// step1 : transpose
	char transpose[i][i];
	for(int k1=0; k1<i; k1++) {
		for(int k2=0; k2<i; k2++) {
			transpose[k2][k1] = text_matrix[k1][k2];
		}
	}

	// displaying transpose matrix
	for(int k1=0; k1<i; k1++) {
		for(int k2=0; k2<i; k2++) {
			cout << transpose[k1][k2] << " ";
		}
		cout << endl;
	}

	cout << endl;

	// step 2: reverse row values
	for(int k1=0; k1<i; k1++) {
		for(int k2=0; k2<i/2; k2++) {
			char temp;
			temp = transpose[k1][k2];
			transpose[k1][k2] = transpose[k1][i-1-k2];
			transpose[k1][i-1-k2] = temp;
		}
	}

	// displaying new matrix
	for(int k1=0; k1<i; k1++) {
		for(int k2=0; k2<i; k2++) {
			cout << transpose[k1][k2] << " ";
		}
		cout << endl;
	}



	return 0;
}

int pow(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result*=a;
	}
	return result;
}
