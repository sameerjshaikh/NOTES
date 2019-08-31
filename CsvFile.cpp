#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
static int serial = 1;
class Employee
{

public:
	int empid;
	string empName;
	string empAdd;
public:
	void setDetails(int id, string name, string addr)
	{
		empid = id;
		empName = name;
		empAdd = addr;
	}



	void writeFile()
	{
		int id;
		string name, addr;
		ofstream fout;
		string fname = "ass10.csv";
		bool tryAgain = true;
		fout.open(fname.c_str(), ios::app);
		do
		{
			cout << "\n enter id:....";
			cin >> id;
			cout << "\n Enter  emp name:....";
			cin >> name;
			cout << "\n Enter address:....";
			cin >> addr;
			fout << id << "," << name << "," << addr << "\n";
			string option;
			cout << "Press n for New Entry else any other key";
			cin >> option;
			serial++;
			tryAgain = option == "n" ? true : false;
		} while (tryAgain);
		fout.close();
	}

	void update()
	{
		int id, l1;
		string name, addr, line;
		fstream fin, fout;
		string fname = "ass10.csv";
		int find;
		cout << " update the record by serial no:" << endl;
		cin >> find;


		fin.open("ass10.csv", ios::in);


		fout.open("ass10.csv", ios::app);
		for (int i = 1;i <= serial;i++)
		{
			if (i == find)
			{
				while (!fin.eof())
				{

					getline(fin, line);
				}
				line.clear();
				cout << "enter ID " << endl;
				cin >> id;

				cout << "enter Name" << endl;
				cin >> name;

				cout << "enter Address" << endl;
				cin >> addr;
				line = "\n emp Detsils \n";
				line += "\n emp name:\t " + name;
				line += "\n emp address:\t " + addr;
				fout << id << "," << name << "," << addr << "\n";

			}
			else
			{
				cout << "not found";
			}
		}

	}
	void delete1()
	{
		remove("ass10.csv");
	}
};
void menu()
{
	string t = "1 WRITEFILE \n";
	t += "2 UPDATE \n";
	t += "3 DELETE FILE \n";
	cout << t;
}
Employee e;
void start()
{
	int n;

	do {
		cout << "enter choice \n";
		cin >> n;
		switch (n)
		{
		case 1: e.writeFile();
			break;
		case 2:e.update();
			break;
		case 3:e.delete1();
			break;
		default:exit(0);
		}
	} while (true);
}

int main() {
	menu();
	start();
}