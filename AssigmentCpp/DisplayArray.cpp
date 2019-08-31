#include<iostream>
using namespace std;
int* a, Size;
void display(int* arr);


void display(int* arr)
{
	for (int i = 0;i < Size;i++)
	{
		cout<<"Entered array is: "<<arr[i];
	}	
}

void EnterValue() {

	cout << "enter size of array"<<endl;
	cin >> Size;
	a = new int[Size];
	cout << "enter " << Size << " elements"<<endl;
	for (int i = 0;i < Size;i++)
	{
		cin >> a[i];
	}
	display(a);
}
int main()
{
	EnterValue();
}
