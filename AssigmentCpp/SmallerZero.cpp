#include<iostream>
using namespace std;

void zero_small(int &a ,int &b)
{
	if(a>b)
	{ 
		b = 0;
	}
	else
	{
		a = 0;
	}
	//cout << a<<"  "<<b << endl;
}

int main()
{
	int val1, val2;
	cout << "enter first value: " << endl;
	cin >> val1;
	cout << "enter first value: " << endl;
	cin >> val2;

	zero_small(val1,val2);
	cout << val1 << "" << val2 << endl;
}
