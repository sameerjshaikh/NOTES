#include<iostream>
using namespace std;
int* a, Size;

int sum(int* arr)
{
	int temp=0;
	for (int i = 0;i < Size;i++)
	{
		temp += arr[i];
	}
	return temp;
}
float avg(int* arr)
{
	int temp = 0;
	for (int i = 0;i < Size;i++)
	{
		temp += arr[i];
	}
	return temp/ Size;
}
int main()
{

	cout << "enter size of array";
	cin >> Size;
	a = new int[Size];
	cout << "enter "<<Size<<" elements";
	for(int i=0;i<Size;i++)
	{
		cin >> a[i];
	}
	cout << "Sum is =" << sum(a);
	cout << "Avrage is =" << avg(a);
}
