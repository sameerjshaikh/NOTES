#include<iostream>
using namespace std;


float centigrade(float fahren)
{
	return (fahren - 32) / 1.8;
}
int main()
{
	float fahren, centi;
	do {
		cout << "Enter temperature in fharenheit" << endl;
		cin >> fahren;
		cout << "Temperature in centigrade-:" << centigrade(fahren)<<endl;
	} while (1);


}
