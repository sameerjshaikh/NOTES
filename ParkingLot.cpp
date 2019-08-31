#include<iostream>
#include<string>
using namespace std;
static int rt = 1;
static int size;


int getNumber(string message) {
	int answer = 0;
	cout << message << endl;
	cin >> answer;
	return answer;
}

class parkingTicket
{
private:
	string name;
	int num;
public:
	void set(string n, int a)
	{
		name = n;
		num = a;
	}
	string getname()
	{
		return name;
	}
	int getnum()
	{
		return num;
	}
};
parkingTicket t;
parkingTicket createObject(string name, int num)
{
	t.set(name, num);
	return t;
}
string getString(string message) {
	string answer;
	cout << message << endl;
	cin >> answer;
	return answer;
}
class ParkingLot
{
public:
	parkingTicket p[100];
public:
	void raiseTicket(parkingTicket t)
	{
		for (int i = 0;i < size; i++)
		{
			if (p[i].getname() == "")
			{
				p[i].set(t.getname(), rt);
				rt++;
				return;
			}
			else continue;

		}
	}
	void display()
	{
		for (int i = 0;i < size;i++)
		{
			if (p[i].getname() != "")
			{
				cout << p[i].getname() << "\t" << p[i].getnum() << endl;
			}
		}
	}
	void findVehicle()
	{
		cout << "enter the rt" << endl;
		int rt1;
		cin >> rt1;
		for (int i = 0;i < size;i++)
		{
			if (p[i].getnum() == rt1)
			{
				cout << p[i].getname() << endl;
			}
		}
	}
};

ParkingLot pl;
void menu()
{
	string con = "1 RAISE TICKET \n";
	con += "2 Display \n";
	cout << con << endl;
}
void start()
{
	do {
		cout << "CHOICE" << endl;
		int ch;
		cin >> ch;
		int rt = 1;
		switch (ch)
		{

		case 1: 
			
			pl.raiseTicket(createObject(getString("enter the vehicle"), rt));
			rt++;
			break;
		case 2: pl.display();
			break;
		case 3: pl.findVehicle();
			break;
		default: exit(0);
		}
	} while (true);
}
int main()
{

	menu();
	start();
}