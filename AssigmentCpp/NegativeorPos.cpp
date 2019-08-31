#include<iostream>
#include<string>
using namespace std;

int main()
{
	int val1;
	cout << "Enter Number:";
	cin >> val1;

	string s1 = val1 < 0 ? "Number is Negative" : "Number is Positive";
	cout << s1;
}