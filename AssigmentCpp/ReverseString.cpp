#include<iostream>
#include<string>
using namespace std;
char* a;
int len;

void getChar(char* b)
{
	char temp;
	int p = len-1;
	cout << "Reverse String is:-" << endl;

	for (int i =0; i<(len/2) ;i++)
	{

		temp = a[i];
		a[i] = a[p];
		a[p] = temp;
		p--;
	}

	
	for (int i = 0; i < len;i++)
	{
		cout << a[i];
	}

}
int main()
{
	string s;
	cout << "enter name";
    getline(cin,s);
	len = s.length();
	a = new char[len];

	for (int i = 0;i < len;i++)
	{
		a[i] = s[i];
	}
	
	
	getChar(a);
}
