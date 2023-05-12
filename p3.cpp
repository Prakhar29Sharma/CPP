#include<iostream>

using namespace std;

string maskify (string string)
{
  char masked[string.length()];
  int mask_it = 1;
  for (int i = 0; i < string.length(); i++) {
    if (i == string.length()-4) {
      mask_it = 0;
    }
    if (mask_it == 1) {
      masked[i] = '#';
    } else {
      masked[i] = string[i];
    }
  }
  return masked; // return it
}

int main() {
  string data;
  cout << "Enter the data to be masked: " << endl;
  cin >> data;
  cout << "masked data: " << maskify(data) << endl;
  return 0;
}