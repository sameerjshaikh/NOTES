#include<iostream>
using namespace std;
int fact(int n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
	

}


int main()
{
	int val1;
	cout << "Enter number For find factorial:-";
	cin >> val1;

	cout << "Factorial of " << val1 << " is " << fact(val1) << endl;
	return 0;
}