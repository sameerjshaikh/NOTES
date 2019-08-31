#include "TicketGeterSeter.h"

void getChoice();
void genrateTicket();
void findTicket();
Ticket t[100];
int num = 8976;


int main()
{
	while (1) 
	{
	getChoice();
	}
}

void getChoice()
{
	int i;
	cout << "Press 1 for ticket genration" << endl << "Press 2 to enter ticket number to find your vehical location"<<endl;
	cout << "--------------------------------------------------------------------------------"<<endl;
	cin >> i;

	switch (i)
	{
	case 1:
		genrateTicket();
		break;
	case 2:
		findTicket();
		break;
	default:
		break;
	}
}

void genrateTicket()
{
	
	for (int i = 0;i<100;i++)
	{
		if (t[i].getId() == 0)
		{
			string vehicalNum;
			cout << "Enter your vehical no." << endl;
			cin >> vehicalNum;
			t[i].setDetails(i + 1, num + 1, vehicalNum);
			cout << "ID is " << i + 1 << " and ticket number is " << num + 1<<endl<<endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			num++;
			return;
		}
		else
		{
			continue;
		}
	}

}
void findTicket()
{
	string num=t->GetStringNew("Enter Vehical Number to find the location of your vehical");
	//cout << num<< endl;
	for (int i = 0;i < 100;i++)
	{
		if (t[i].getVehicalNumber().compare( num)==0)
		{
			cout << "Your bike is at " << t[i].getId() << " location and ticket number is "<< t[i].getNumber()<< "and vehical number is " << t[i].getVehicalNumber()<<endl;
			return;
		}
		else if (i = 99)
		{
			cout << "No record found" << endl;
		}
		else
		{
			continue;
		}
	}
}