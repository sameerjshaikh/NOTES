#pragma once
#include<iostream>
#include<string>
using namespace std;


class Ticket
{

	int TicketId;
	long TicketNo;
	string vehicalNumber;

public:
	void setDetails(int TicketId,int TicketNo, string vehicalNumber)
	{
		this->TicketId= TicketId;
		this->TicketNo= TicketNo;
		this->vehicalNumber = vehicalNumber;
	}

	int getNumber()
	{
		return TicketNo;
	}
	string getVehicalNumber()
	{
		return vehicalNumber;
	}
	int getId()
	{
		return TicketId;
	}
	int GetString(string s)
	{
		cout << s<<endl;
		int num;
		cin >> num;
		return num;
	}
	string GetStringNew(string s)
	{
		cout << s << endl;
		string num;
		cin >> num;
		return num;
	}
};
