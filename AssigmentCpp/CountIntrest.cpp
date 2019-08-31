#include<iostream>
using namespace std;


float Intrest(float pri,float rate,float time)
{
	return (pri* rate*time) / 100;
}
int main()
{


	float pri,time, rate,si;
	cout << "Enter principle amount"<<endl;
	cin >> pri;
	cout << "Enter rate" << endl;
	cin >> rate;
	cout << "Enter period of time(in year's)" << endl;
	cin >> time;
    cout<<"Your simple Intrest will be -:"<<Intrest(pri, rate, time);


}
