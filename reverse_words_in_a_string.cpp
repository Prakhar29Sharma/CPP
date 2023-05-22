#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;


//function to reverse a string
string revstr(string str) {
	int i,j;
	for(i=0,j=str.length()-1; i<j; i++,j--) {
		char temp = str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	return str;
}


// main
int main() {
	
	// take text as input
	string text;
	cout << "Enter a line of text: ";
	getline(cin, text);
	// initialize variables
	string new_text = "";
	text+=" ";
	int i=0, j=0;
	int spaces=0;
	int len = text.length();
	
	// count spaces
	for(i=0; i<len; i++) {
		if(text[i]==' ') {
			spaces+=1;
		}
	}

	// divide text into array of words
	string words[spaces+1];
	int w=0;
	for(i=0; i<len; i++) {
		if(text[i]==' ') {
			string temp="";
			for(int k=j; k<i; k++) {
				temp+=text[k];
			}
			j=i;
			words[w++]=temp;
		}
	}

	// reverse each word and concat with new_text
	for(i=0; i<spaces+1; i++) {
		new_text+=revstr(words[i]);
		new_text+=" ";
	}

	// text with reversed words
	cout << "new text : " << new_text << endl;

	return 0;
}