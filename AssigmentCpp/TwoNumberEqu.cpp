#include<iostream>
using namespace std;
void compare(int val1, int val2);
int main()
{
	int val1, val2;
	cout << "Enter Two Values\n";
	cin >> val1 >> val2;
	compare(val1,val2);
	
}
void compare(int val1, int val2)
{
	if (val1^val2)
		cout << "Both Number Are Not Same";
	else
		cout << "Both Number Are Same";
}
